#include <stdio.h>

/**
 * main - alphabet
 *
 * Return:0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(',');
		putchar(' ');
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}

