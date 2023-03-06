#include "main.h"

/**
 * _memset - fills irst n bytes
 * @s: pointer to s
 * @b: char
 * @n: integer
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*p++ = b;
	return (s);
}
