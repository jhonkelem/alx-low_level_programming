#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer to the old array
 * @old_size: size of the memory space to allocate in bytes
 * @new_size: size of type
 * Return: void pointer
 */

void *realloc(void *prt, unsigned int old_size, unsigned int new_size)

{

void *newptr;

if (ptr == null)

{

newptr = malloc(new_size);

if (newptr == NULL)

{

free(ptr);
										return (NULL);
										}

free(ptr);

return (newptr);

}

if (old_size == 0)

return (NULL);

if (new_size == old_size)

return (ptr);

if (new_size == 0 && ptr != NULL)

{

free(ptr);

return (NULL);

}

if (new_size > old_size)

{

newptr = malloc(new_size);

if (newptr == NULL)

{
										free(ptr);
										return (NULL);
										}

_memcpy(newptr, ptr, old_size);
										free(ptr);
										}

return (newptr);

}

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to memmory area
 * @src: pointer to another memory area
 * @n: number of bytes to be copied from src
 * Return: memory adress of function
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{

unsigned int i;
char *tmp = dest;

for (i = 0; i < n; i++)

{

*dest = *src;

dest++;
										src++;
										}

dest = tmp;

return (dest);

}
