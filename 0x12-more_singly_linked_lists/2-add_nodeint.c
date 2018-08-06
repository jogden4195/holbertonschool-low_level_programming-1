#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a list
 * @head: pointer to a pointer to a struct
 * @n: number
 * Return: address of new element, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (!new_head)
		return (NULL);
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (*head);
}
