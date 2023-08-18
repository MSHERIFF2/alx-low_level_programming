#include "variadic_pointers.h"

/**
 * print_numbers - variadic function that print numbers
 * @separator: pointer to a character
 * @n: pointer to an unsigned integer
 *
 * Return: nothing
 */
void print_numbers(const char *separtor, const unsigned int n, ...)
{
	const unsigned int i;
	va_list numbers;

	if (separator == NULL)
		return;
	va_start(numbers, n);
	for (i = 0; i <= n; i++)
	{
		const char *sep;
		const unsigned int printout;

		printout = va_arg(numbers, unsigned int);
		sep = &separator;
		*sep = ' ';
		printf(sep, printout);
	}
	va_end(numbers);
	printf("\n");
	return;
}
