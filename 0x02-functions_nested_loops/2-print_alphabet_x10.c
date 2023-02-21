#include <stdio.h>
/**
 * main - prints alphabet 10 times
 *
 * Return: Always 0
 */
int main(void)
{
	int i, n;

	for (n = 0; n <= 9; n++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
	return (0);
}
