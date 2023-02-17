#include <stdio.h>

/**
 * main - Prints diff combination of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
