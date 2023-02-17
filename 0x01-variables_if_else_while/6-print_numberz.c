#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints 0 to 9
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
