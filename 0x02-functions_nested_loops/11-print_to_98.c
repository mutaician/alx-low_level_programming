#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers to 98
 *
 * @n: integer
 * return: 0 ALways
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n = n + 1;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n = n - 1;
		}
	}
}
