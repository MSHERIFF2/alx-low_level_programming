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
	if (n == 0)
		return (0);
	for (i = n; i >= 0; i = va_arg(sum, unsigned int))
	{
		int sum = 0;

		sum += i;
		printf("%d\n", sum);
	}
	va_end(sum);
	printf("\n");
	return (0);
}
