#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[98] = {0x00};
	char b;

	_memset(s, b,  98);
	_memset(s, 0x01, 95);
	printf("-------------------------------------------------\n");
	_memset(s, 98);
	return (0);
}
