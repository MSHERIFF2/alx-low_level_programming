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
	if (ac == 0 || av == NULL)
	{
		return NULL;
	}
	int total_length = 0;
	
	for (int i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	char *concatenated = (char *)malloc(total_length * sizeof(char));
	
	if (concatenated == NULL)
	{
		return NULL;
	}
	int position = 0;
	
	for (int i = 0; i < ac; i++)
	{
		strcpy(concatenated + position, av[i]);
		position += strlen(av[i]);
		concatenated[position] = '\n';
		position++;
	}
	return concatenated;
}

