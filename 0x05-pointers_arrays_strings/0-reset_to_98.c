#include <stdio.h>
#include "main.h"
/**
 * main - takes a pointer to an int as parameter
 * and updates the value it points to 98
 *
 * Return: 0(Success)
 */

void reset_to_98(int *n)
{
	int b = 402;
	int *n = &b;
	*n = 98;
	prinf("%d", b);

	return (0);
}
