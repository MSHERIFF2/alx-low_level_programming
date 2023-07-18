#include "main.h"

/**
 * _isalpha- checker for upercase
 * @c: check for uper or lower character
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

