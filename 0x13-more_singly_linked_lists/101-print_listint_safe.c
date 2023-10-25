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
	const listint_t *tortoise, *hare;
	size_t count = 0;

	tortoise = head;
	hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		count++;

		printf("[%p] %d\n", (void *)tortoise, tortoise->n);

		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			return (count);
		}
	}

	return (count);
}
