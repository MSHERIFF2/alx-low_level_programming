#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0
 */
int get_endianness(void)
{
	return *((unsigned char *)&(int){1}) == 1;
}
