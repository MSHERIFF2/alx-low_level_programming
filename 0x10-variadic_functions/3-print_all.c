#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anyting
 * @format: pointer to anything but but cannot be change
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	
	va_start(args, format);
	char c;
	int i;
	float f;
	char *s;
	int idx = 0;
	int null_count = 0;

	while (format[idx] != '\0')
	{
		if (format[idx] == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
		}
		else if (format[idx] == 'i')
		{
			i = va_arg(args, int);
			prinft("%d", i);
		}
		else if (format[idx] == 'f')
		{
			f = (float)va_arg(args, int);
			printf("%f", f);
		}
		else if (format[idx] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
				null_count++;
			}
			else 
			{
				printf("%s", s);
			}
		}
		idx++;
	}
	va_end(args);
	printf("\n");
