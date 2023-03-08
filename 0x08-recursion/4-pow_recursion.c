#include "main.h"

/**
 * _power_recursion - power recursion
 * @x: integr
 * @y: integer
 * Return: -1 or power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
