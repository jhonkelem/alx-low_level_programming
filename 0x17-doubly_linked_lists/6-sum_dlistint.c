#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data
 * of linked dlistint_t list
 * @head: pointer to head node of the list
 * Return: sum of all data of the list
 */

int sum_dlistint(dlistint_t *head)

{

int result = 0;
dlistint_t *temp = NULL;

temp = head;
while (temp != NULL)
{

result += temp->n;
temp = temp->next;

}
return (result);

}
