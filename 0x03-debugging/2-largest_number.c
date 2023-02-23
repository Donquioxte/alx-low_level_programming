#include "main.h"
/**
 * largest_number - returns the largest of the 3 numbers
 * @a - first integer
 * @b - second integer
 * @c - third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		target = a;
	}
	else if (b >= a && b >= c)
	{
		target = b;
	}
	else
	{
		target = c;
	}
	return (largest);
}
