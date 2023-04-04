#include "lists.h"

/**
* listint_len - returns the number of elements
* @h: head pointer
* Return: the number of elements in the list
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *head = h;
	size_t nodes = 0;

	while (head != NULL)
	{
		nodes ++;
		head = head->next;
	}
	return (nodes);
}
