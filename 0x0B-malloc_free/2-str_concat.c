#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenaates two strings
 * @s1: first
 * @s2: second
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	char *empty = "";
	int i, j, k, limit;

	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	strout = malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
	{
		free(strout);
		return(NULL);
	}
	for (k = 0; k< i; k++)
		strout[k] = s1[k];
	limit = j;
	for (j = 0; j <= limit; k++, j++)
		strout[k] = s2[j];
	return(strout);
}
