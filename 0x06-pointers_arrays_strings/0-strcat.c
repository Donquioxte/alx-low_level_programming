#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: An input value
 * @src: An input value
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src);
{
	int a, b;

	a = 0
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0
	while (src[b] != '\0')
	{
		dest[a] = scr[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
