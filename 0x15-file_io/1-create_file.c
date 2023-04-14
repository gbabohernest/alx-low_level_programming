#include "main.h"

/**
* create_file - Creates a file
*
* @filename: name of file to create
* @text_content: a NULL terminated
*	string to be written to the file
*
* Description: Created file must have rw.....
*	permission, if file already exist don't
*	change permission.
*	if FILE already exists, truncate it
*	if FILENAME is NULL, return -1
*	if text_content is NULL, create an empty file
*
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t size, file_len;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = " ";
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd < 0)
	{
		return (-1);
	}

	file_len = 0;

	while (*text_content != '\0')
	{
		file_len++;
	}

	size = write(fd, text_content, file_len);

	if (size < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
