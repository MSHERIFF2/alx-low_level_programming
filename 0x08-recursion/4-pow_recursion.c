#include "main.h"

/**
 * _pow_recursion - function that returns the
 * value of x raised to the power of y
 * @x: The base value
 * @y: The power to raise the base value to
 * Return: 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (_pow_recursion(x, y));
}
