#include <stdio.h>
#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @*str: A char function
 *
 * Return: 0(Success)
 */

void _puts(char *str)
{
	*str = "Random Line";
	put(*str);
}
