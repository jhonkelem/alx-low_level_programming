#include "lists.h"

/**
 * find_listint_loop -function that finds the loop in a linked list
 * @head: pointer to the struct listint_t
 * Return: the adress of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)

{

listint_t *hare = head, *tortoise = head;

if (head)

{

while (hare && hare->next)
										{
										hare = hare->next->next;
										tortoise = tortoise->next;
																				if (tortoise == hare)
																				{
																														tortoise = head;
																														while (tortoise != hare)
																														{
																																								tortoise = tortoise->next;
																																								hare = hare->next;
																														return (tortoise);

}																				}

}

return (NULL);

}
