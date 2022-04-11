#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: passed from main
 * @age: passed from main
 * @owner: passed from main
 * Return: pointer to the struct
 */

dog_t *new_dog(char *name, float age, char *owner)

{

dog_t *ptr;

if (name == NULL || owner == NULL)

return (NULL);

ptr = malloc(sizeof(dog_t));

if (ptr != NULL)

{

ptr->name = _strdup(name);

if (ptr->name == NULL)
										{
										free(ptr->name);
										free(ptr);
										return (NULL);
																				}
										ptr->age = age;
										ptr->owner = _strdup(owner);
										if (ptr->owner == NULL)
										{
																				free(ptr->name);
																				free(ptr->owner);
																				free(ptr);
																				return (NULL);
										}
										return (ptr);
										}

return (NULL);

}
