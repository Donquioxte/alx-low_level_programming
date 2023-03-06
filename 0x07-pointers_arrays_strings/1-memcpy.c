#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: Memory area copied to
 * @src: Memory are copied from
 * @n: Bytes
 *
 * Return: 0(Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
