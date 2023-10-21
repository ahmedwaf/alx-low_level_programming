#include "main.h"

/**
 * list_len - Counts the number of elements in a linked list.
 * @h: A pointer to the head of the linked list.
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
