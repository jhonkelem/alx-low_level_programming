#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_inddex - inserts a node at a given index
 * @head: the node at the beginning of the list
 * @idx: the index at which to insert the node
 * @n: the content of the inserted node
 * Return: the pointer to the node, otherwise Null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{

unsigned int i;

listint_t *node, *prev;

if (head != NULL)

{

node = malloc(sizeof(listint_t));

if (node != NULL)
										{
										node->n = n;
										if (idx == 0)

{

node->next = *head

*head = node;

return (node);

}

prev = *head;
for (i = 1; i < idx && *head != NULL; i++)

prev = prev != NULL ? prev->next : NULL;

if (i == idx && prev != NULL)

{

node->next = prev->next;
										prev->next = node;

return (node);

}

else

{

free(node);

}

}

}

return (NULL);

}
