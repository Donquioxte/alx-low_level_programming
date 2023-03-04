#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers
 * @a: An input integer
 * @n: An input integer
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
