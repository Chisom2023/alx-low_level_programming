#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t print_listint_safe(const listint_t *head);

/**
 * print_listint_safe - Prints a listint_t list safely
 * in a looped listint_t linked list
 * @head: A pointer to the head of the listint_t to check
 *
 * Return: if the list is not looped - 0
 * Otherwise - the number of unique nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		node_count++;
		if (head < head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;

		}
		head = head->next;
	}

	return (node_count);
}

