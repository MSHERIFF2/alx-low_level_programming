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
	for (char letter = 'a'; 'a' <= 'z'; letter++)
		fputs("%c", letter);
	puts("\n");
	return (0);
}
