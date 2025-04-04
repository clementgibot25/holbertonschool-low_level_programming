#include "main.h"

/**
 * error_case - Handles different error cases for the cp program
 * @err_num: The error number
 * @file: The file name to be printed in the error message
 * @fd: The file descriptor to be printed in the erro
 * return: void
 */
void error_case(int err_num, char *file, int fd)
{
	if (err_num == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (err_num == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	else if (err_num == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	else if (err_num == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file
 * @argc: The number of command line arguments
 * @argv: An array of pointers to the command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r;
	char buffer[1024];

	if (argc != 3)
		error_case(97, NULL, 0);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_case(98, argv[1], 0);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_case(99, argv[2], fd_from);

	while ((r = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		if (write(fd_to, buffer, r) != r)
			error_case(99, argv[2], fd_from);
	}

	if (r == -1)
		error_case(98, argv[1], fd_from);

	if (close(fd_from) == -1)
		error_case(100, NULL, fd_from);

	if (close(fd_to) == -1)
		error_case(100, NULL, fd_to);

	return (0);
}
