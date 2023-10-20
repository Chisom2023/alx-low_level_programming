#include <stdio.h>
#include "lists.h"

/**
 * print_list - print a linked lists
 * _strlen - returns the length of a string
 * @h: pointer to first node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		node_count++;
		h = h->next;
	}

	return (node_count);
}
