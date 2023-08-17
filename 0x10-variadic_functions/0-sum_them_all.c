#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum
 * of all its parameters.
 * @n: optional argument
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	int i;

	va_start(sum, n);
	for (i = n; i >= 0; i++)
	{
		int sum;

		sum += i;
		printf("%d\n", sum);
	}
	va_end(sum);
	printf("\n");
	return (0);
}
