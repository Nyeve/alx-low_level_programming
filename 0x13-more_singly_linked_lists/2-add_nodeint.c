#include "lists"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the pointer to the first node
 * @n: the value to the new node
 *
 * Return : the address of the new element, or NULL 
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_new;
	/*create new node */

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL);
	return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head
}
