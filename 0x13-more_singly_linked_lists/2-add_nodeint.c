#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 *
 * @head: Pointer to a pointer to the first node of the list
 * @n: Value to be set in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	/* Allocate memory for the new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	/* Set the value of the new node */
	new->n = n;
	/* Set the next pointer of the new node to the current head */
	new->next = *head;

	/* Update the head pointer to point to the new node */
	*head = new;
	/* Return the address of the new node */
	return (new);
}

