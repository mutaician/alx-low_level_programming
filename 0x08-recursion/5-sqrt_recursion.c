#include "main.h"

/**
 * sqrt_check - helper function that checks squareroot of n
 * @n: number to find the square root of
 * @root: current cundidate to check square root
 * Return: square root of n or -1 if no natural square root exist
 */
int sqrt_check(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root * root > n)
		return (-1);
	return (sqrt_check(n, root + 1));
}

/**
 * _sqrt_recursion - computes natural square root of a number
 * @n: number to find square root from
 * Return: squareroot or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_check(n, 0));
}
