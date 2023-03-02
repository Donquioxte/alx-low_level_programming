#include "main.h"
#include <stdio.h>
/**
 * _strncat - a function that concatenates two strings using
 * at most n bytes
 * @dest: A string in the function
 * @src: Another string in the function
 * @n: An integer in the function
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
