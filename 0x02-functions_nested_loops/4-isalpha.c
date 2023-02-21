#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * Return: 1 if it is a letter,lowercase or uppercase and 0 for rest
 * @c: The characterin ASCII code
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c >= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
