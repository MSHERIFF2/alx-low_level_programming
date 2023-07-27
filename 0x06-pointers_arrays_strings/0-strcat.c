#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate two strings
 * @dest: first string
 * @src: second place holder for string
 *
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (0);
}
