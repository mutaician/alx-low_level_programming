#include <stdio.h>

/**
 * main - prints _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char *sh = "_putchar";
	while (*sh)
	{
		write(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
