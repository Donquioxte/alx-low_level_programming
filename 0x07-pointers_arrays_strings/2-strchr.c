#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates character in a string
 *
 * @s: The string
 * @c: Input
 *
 * Return: 0(Success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + 1);
	}
	return (NULL);
}
