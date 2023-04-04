#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Insert a new node at a given position
 * @head: Address of the first node of the list
 * @idx: Position of the new node to be inserted in list
 * @n: Data of the new node
 * Return: Address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *y;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	y = *head;
	for (; i < idx - 1 && y != NULL; i++)
		y = y->next;
	if (y == NULL)
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = y->next;
	y->next = new_node;
	return (new_node);
}
