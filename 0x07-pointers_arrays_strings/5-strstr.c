#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: A Sting
 * @needle: A substring
 * Return: 0(Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
