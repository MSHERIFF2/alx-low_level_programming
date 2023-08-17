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
	if (n == 0)
		return (0);
	va_list args;
	int i, total_sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int num = va_ard(args, int);
		total_sum += num;
	}
	va_end(args);
	return (total_sum);
}
