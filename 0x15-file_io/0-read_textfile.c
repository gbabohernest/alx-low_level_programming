#include "main.h"

/**
* read_textfile - Reads a text file and prints it to the stdout
* @filename: name of the file to be read & printed
* @letters: number of letters it should read & print
* Return: actual number of letters it could read & print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t bytes_read, bytes_written;
	char *str;

	if (filename == NULL)
	{
		return (0);
	}
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		return (0);
	}
	str = (char *)malloc(sizeof(char) *  letters);
	if (str == NULL)
	{
		close(file_desc);
		return (0);
	}
	bytes_read = read(file_desc, str, letters);
	if (bytes_read == -1)
	{
		close(file_desc);
		free(str);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, str, bytes_read);

	if (bytes_read != bytes_written)
	{
		close(file_desc);
		return (0);
	}
	free(str);
	close(file_desc);
	return (bytes_read);
}
