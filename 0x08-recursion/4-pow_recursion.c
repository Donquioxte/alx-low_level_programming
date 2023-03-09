#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: Input
 * @y: Input
 * Return: -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursions(x, y - 1));
}
