#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list and returns its size
 * @head: Pointer to the head of the listint_t list
 *
 * This function traverses the list once, printing each node's value and
 * keeping track of the count. It returns the size of the list.
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}
