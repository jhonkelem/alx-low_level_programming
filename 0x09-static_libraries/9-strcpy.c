#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: parameter defined in main function
 * @src: parameter defined in main function
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)

{

char *tmp = dest;

while (*src != '\0')

{

*dest = *src;

src++;
										dest++;
										}

*dest = '\0';

return (tmp);

}
