#include "lists.h"
/**
 * print_listint - prints the linked list
 * @head: head of the list of elements
 * Return: returns the count
 */

size_t print_listint(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	while (current != 0)
	{
		printf("%d\n", current->n);
		icount++;
		current = current->next;
	}
	return (count);
}
