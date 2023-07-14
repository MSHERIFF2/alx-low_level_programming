#include <stdio.h>

/**
 * main - number
 *
 * Return:0
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
