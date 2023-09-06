#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * print_err_exit - function that print error
 * @exit_code: exit code
 * @error_message: error message
 * @arg: pointer
 * Return: message
 */
void print_err_exit(int exit_code, const char *error_message, const char *arg)
{
	dprintf(STDERR_FILENO, error_message, arg);
	exit(exit_code);
}

/**
 * main - function that copy from one file to another file
 * @argc: variable that count the input
 * @argv: pointer array that store the input
 * Return: the input to stdout
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IROTH);
	bytes_read = read(fd_from, buffer, sizeof(buffer));
	bytes_written = write(fd_to, buffer, bytes_read);
	if (argc != 3)
		print_err_exit(97, "Usage: %s file_from file_to\n", argv[0]);
	if (fd_from == -1)
	{
		char fd_str[20];

		snprintf(fd_str, sizeof(fd_str), "%d", fd_from);
		print_err_exit(98, "Error: Can't read from file %s\n", file_from);
	}
	if (fd_to == -1)
	{
		char fd_str[20];

		snprintf(fd_str, sizeof(fd_str), "%d", fd_to);
		print_err_exit(99, "Error: Can't write to file %s\n", file_to);
	}

	while (bytes_read > 0)
	{
		if (bytes_written == -1)
		{
			print_err_exit(99, "Error: Can't write to file %s\n", file_to);
			print_err_exit(98, "Error: Can't read from file %s\n", file_from);
		}
	}
	close(fd_from);
	close(fd_to);
	return (0);
}

