#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a given number
 * @s: the pointer to the string
 * Return:0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n-1));
}
