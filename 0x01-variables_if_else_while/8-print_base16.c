#include <stdio.h>

/**
 * main - number
 *
 * Return:0
 */

int main(void)
{
	int n = 0;

	while (n <= 15)
	{
		if (n < 10)
		{
			putchar(n + '0');
		}
		else
		{
			putchar(n - 10 + 'A');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
