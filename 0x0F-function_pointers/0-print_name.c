#include "function_pointers.hi"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: a pointer to character
 * @f: a function pointer to character
 *
 * Return: void 
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
	printf("%s\n", name);
}
