#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars
 * @size: size of array
 * @c: storage 
 * Return: pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *dub;
	unsigned int i;

	if (size == 0)
		return (NULL);
	dub = malloc(sizeof(c) * size);

	if (dub == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		dub[i] = c;
	return (dub);
}
