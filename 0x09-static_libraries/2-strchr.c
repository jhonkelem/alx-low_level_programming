#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a charcter in a string
 * @s: pointer to memory string
 * @c: charcter to be located
 * Return: memory address of function
 */

char *_strchr(char *s, char c)

{

while (s++)

{

if (*s == c)

return (s);

if (!*s)

return (NULL);

}

return (NULL);

}
