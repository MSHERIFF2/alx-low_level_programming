#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - variadic function that print numbers
 * @separator: pointer to a character
 * @n: pointer to an unsigned integer
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
