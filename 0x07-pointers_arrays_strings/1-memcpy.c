#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: integer 
 * Return: a pointer to a destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p_dest = dest;
	char *p_src = src;

	while (n--)
		*p_dest++ = *p_src++;
	return dest;
}
