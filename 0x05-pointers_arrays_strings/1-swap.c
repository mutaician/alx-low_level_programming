#include "main.h"

/**
 * swap_int - swaps value of inegers
 * @a: first ineger
 * @b: second integer
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
