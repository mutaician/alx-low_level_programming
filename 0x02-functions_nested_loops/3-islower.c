#include <stdio.h>

/**
 * main -checks for lowercase character
 *
 * Return: 1 for lowercase and 0 for the rest
 */
int main(void)
{
	char c;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
