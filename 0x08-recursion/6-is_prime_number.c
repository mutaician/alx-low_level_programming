#include "main.h"

/**
 * is_prime - checks if a number is prime
 * @n: number to check
 * @i: divisor
 * Return: 1 if prime otherwise 0
 */
int is_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, i + 1));
	}
}
/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to be checked
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, 2));
	}
}
