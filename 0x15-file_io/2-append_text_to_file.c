#include "main.h"
#include <string.h>

/**
* append_text_to_file - Appends test at the end of a file
*
* @filename: name of the file
* @text_content: string to add at the end of the file
*
* Description:	if FILE does not exist, do not create it
*		if FILENAME is NULL, return -1
*		if text_content is NULL, do not add anything
*		to the file.
*		if FILE exist, return 1, if not -1 or if you
*		do not have required permisssions to write to the file
*
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t size, len;

	if (!filename)
	{
		return (-1);
	}
	file_desc = open(filename, O_APPEND | O_WRONLY);

	if (!file_desc)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		size = write(file_desc, text_content, len);
		if (size < 0)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);
}
