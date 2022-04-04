#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated space with copy of arg
 * @str: string to copy
 * Return: pointer to array or null
 */

char *_strdup(char *str)

{

unsigned int len;

unsigned int i, j;

char *str_copy;

char *tmp = str;

if (str == NULL)

return (NULL);

i = 0;

while (*str++)
										i++;

len = i;
										str = tmp;
										str_copy = malloc(len * sizeof(char) + 1);
										if (str_copy == NULL)
										return (NULL);
										j = 0;
										while (j < len)
										{
										str_copy[j] = str[j];
										j++;																				}
										str_copy[j] = '\0';
										return (str_copy);

}
