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
	int l1;
	int l2;

	l1 = 0;
	l2 = 0;
	while (*(dest + l1) != '\0')
		l1++;
	while (*(src + l2) != '\0' &&  l1 < 97)
	{
		*(dest + l1) = *(src + l2);
		l1++;
		l2++;
	}
	*(dest + l1) = '\0';
	return (dest);
}
