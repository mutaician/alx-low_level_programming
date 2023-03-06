#include "main.h"
/**
 * _strpbrk - string search
 * @s: source
 * @accept: accept
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
	{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
