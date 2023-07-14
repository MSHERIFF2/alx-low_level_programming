#include <stdio.h>

/**
 * main - alphabet
 *
 * Return:0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		if (c == 'q' || c == 'e')
			continue;
		c++;
	}
	putchar('\n');
	return (0);
}
