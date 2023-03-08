#include "main.h"

/**
 * factorial - compures factorial of a number
 * @n: number
 * Return: factorial /-1/1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
