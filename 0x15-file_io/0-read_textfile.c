#include "maian.h"

/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: pointer to the file
 * @letters: number of letters it should read and print
 * Return: number of bytes to read and write to the output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int lentRead;
	int lentWrite;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
		return (0);
	lentRead = read(fd, buffer, letters);
	lentWrite = write(STDOUT_FILENO, buffer, lentRead);
	if (lentWrite != lentRead && lentWrite == -1)
		return (0);
	free(buffer);
	close(fd);
	return (lentRead);
}

