#include "lists.h"

/**
* add_nodeint_end - adds a node tot the end of a linked list
* @head: pointer to the head of the list
* @n: number of nodes
* Return: address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *point = *head;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);
	if (point != NULL)
	{
		while (point->next != NULL)
			point = point->next;
		point->next = new;
	}
	else
		*head = new;
	return (new);
}
