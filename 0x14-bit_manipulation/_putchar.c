#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that print character
 * @c: variable to the character
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

