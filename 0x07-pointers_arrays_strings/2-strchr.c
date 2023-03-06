#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: source
 * @c: character
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
