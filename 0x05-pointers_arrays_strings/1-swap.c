
#include "main.h"

/**
 * swap_int - this swap the value of two pointers
 *
 * @a: an address in a memory
 * @b: an address in a memroy
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
