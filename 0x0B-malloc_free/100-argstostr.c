#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments
 * @ac: variable
 * @av: pointer
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i;
	char *concatenated;
	int position;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	concatenated = (char *)malloc(total_length * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}
	position = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(concatenated + position, av[i]);
		position += strlen(av[i]);
		concatenated[position] = '\n';
		position++;
	}
	concatenated[position] = '\0';
	return (concatenated);
}

