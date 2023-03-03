#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: An input value
 * @scr: An input value
 * @n: an input value
 *
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && scr[j] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
