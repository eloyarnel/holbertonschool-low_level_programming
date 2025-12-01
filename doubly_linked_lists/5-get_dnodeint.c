#include "lists.h"
#include <string.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 * Return: pointer to the nth node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
dlstint_t *current = head;
while (current != NULL)
{
if (count == index)
return (current);
count++;
current = current->next;
}
return (NULL);
}
