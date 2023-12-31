#include "lists.h"
/**
 * pop_listint - deletes the first node of a linked list
 * @head: points to the firt node of a linked list
 * Return: returns data of first node or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempp;
	int data;

	if (*head == NULL)
		return (0);

	tempp = *head;
	data = tempp->n;

	*head = tempp->next;
	free(tempp);
	return (data);
}
