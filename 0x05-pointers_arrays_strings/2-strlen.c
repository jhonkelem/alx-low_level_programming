#include "main.h"

/**
 * _strlen - function that returns length of string
 * @s: pointer to an string
 * Return: int
 */

int _strlen(char *s)
{

int len = 0;

while(*s != '\0')

{

s++;
len++;

}

return (len);

}
