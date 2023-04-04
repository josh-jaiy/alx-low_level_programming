#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Delete the first element of a list
 * @head: Pointer to a list
 * Return: Integer if success
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int my_data;

	if (*head == NULL)
		return (0);
	ptr = *head;
	*head = ptr->next;
	my_data = ptr->n;
	free(ptr);
	return (my_data);
}
