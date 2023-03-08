#include "main.h"

/**
 * is_prime_number - checks if a number is prime number
 * @n: number to check
 * Return: 1 if prime 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
