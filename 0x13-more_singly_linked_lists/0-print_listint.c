#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * size_t print_listint - function that prints
 * all the elements of a listint_t list.
 * @h: An integer
 * Return: Success(0)
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
