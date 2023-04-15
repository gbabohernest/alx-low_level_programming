#include "main.h"
#define BUFFER_SIZE 1024

int openFiles(char *file_from, char *file_to);
int readFiles(int fd_src, int fd_dest, char *file_from, char *file_to);
int writeToFiles(int fd_dest, char buffer[BUFFER_SIZE],
		int bytes_read, char *file_to);

/**
* main - copies the content of a file to another file
* @argc: total number of argc
* @argv: list of arguments
* Return: 1 on success, exit on failure
*/

int main(int argc, char **argv)
{
	char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	openFiles(file_from, file_to);
	return (0);
}


/**
* openFiles - open files for copying of file's content
* @file_from: FILE_FROM file name
* @file_to: FILE_TO file name
* Return: 0 on success, 98 or 99 exit code on failure
*/

int openFiles(char *file_from, char *file_to)
{
	int fd_src, fd_dest;
	/*unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;*/

	fd_src = open(file_from, O_RDONLY);

	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	readFiles(fd_src, fd_dest, file_from, file_to);

	if (close(fd_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}

	if (close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
	return (0);
}

/**
* readFiles - Reads the file FILE_FROM
*
* @fd_src: File descriptor for FILE_FROM
* @fd_dest: File descriptor for FILE_TO
* @file_from:  FILE_FROM name
* @file_to: FILE_TO name
*
* Return: 0 on success, Exit 98 on failure
*/

int readFiles(int fd_src, int fd_dest, char *file_from, char *file_to)
{
	char buffer[BUFFER_SIZE];
	int bytes_read;

	bytes_read = read(fd_src, buffer, BUFFER_SIZE);

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	writeToFiles(fd_dest, buffer, bytes_read, file_to);

	while (bytes_read != 0)
	{
		bytes_read = read(fd_src, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant read from file %s\n", file_from);
			exit(98);
		}
		if (bytes_read == 0)
		{
			return (0);
		}
		writeToFiles(fd_dest, buffer, bytes_read, file_to);
	}
	return (0);
}

/**
* writeToFiles - Write contents to file FILE_TO
*
* @fd_dest: file descriptor for FILE_TO
* @buffer: Array of character with 1024 chars
* @bytes_read: Total number of characters read and ready to be written
* @file_to: FILE_TO name
*
* Return: 0 on success, Exit 99 on failure
*/

int writeToFiles(int fd_dest, char buffer[BUFFER_SIZE],
		int bytes_read, char *file_to)
{
	int written_content;

	written_content = (write(fd_dest, buffer, bytes_read) != bytes_read);

	if (written_content == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	return (0);
}
