#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list, and
 *               returns the head node's data (n).
 * @head: A pointer to a pointer to the head of the listint_t list.
 *
 * Return: The data (n) of the head node that was deleted.
 *         If the list is empty, returns 0.
 */

int pop_listint(listint_t **head)
{
	/* declare functions */
	int space;
	listint_t *del;
	/*run checks*/
	if (*head == NULL)
		return (0);
	/* store data in del*/
	del = *head;
	/* free head node*/
	space = (*head)->n;

	*head = (*head)->next;

	free(del);

	return (space);
}
