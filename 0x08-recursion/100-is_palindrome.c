#include "main.h"

/**
 * _strlen_recusion - Returns the length of string
 * @s: string
 * REturn: the length of a string
 */
int _strlen_recusion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlrn_recursion(s + 1));
}

/**
 * comparator - compare each character of the string
 * @s: string
 * @n1: smallesr]t iterator
 * @n2: Largest iterator
 * Return: .
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - detects if a string is palindrome
 * @s:Input
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(S, 0, _strlen_recusion(s) - 1));
}
