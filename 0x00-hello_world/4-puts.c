#include <stdio.h>

/**
 * main - hello func
 *
 * Description: print hello
 * Return: always zero
 */

int main(void)
{
	char sentece[] = "\"Programming is like building a multilingual puzzle\"\n";

	fputs(sentece,stderr);
	return (0);
}
