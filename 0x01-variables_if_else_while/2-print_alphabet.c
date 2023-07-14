#include <stdio.h>

/**
 * main - alphabet
 *
 * Return:0
 */

int main(void)
{
	char ltr;
	char nl;

	nl = '\n';
	for (ltr = 'a'; 'a' <= 'z'; ltr++)
		putchar(ltr);
	putchar(nl);
	return (0);
}
