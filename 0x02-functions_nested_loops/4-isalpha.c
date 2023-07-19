#include "main.h"

/**
<<<<<<< HEAD
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
=======
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

>>>>>>> aeddb19728e83782c5043cda6dbe1449242848fb
