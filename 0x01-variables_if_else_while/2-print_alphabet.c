#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - random number
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; 'a' <= 'z'; letter++)
		putchar(letter);
	puts("\n");
	return (0);
}
