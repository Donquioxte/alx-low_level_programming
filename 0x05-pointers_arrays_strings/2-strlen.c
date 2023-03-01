#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * *s: A character to be measured
 *
 * Return 0(Success)
 */

int _strlen(char *s)
{
	char *s[5]="String";
	printf("The Length of the string: %zu \n",strlen(*s));
	return (0);
}
