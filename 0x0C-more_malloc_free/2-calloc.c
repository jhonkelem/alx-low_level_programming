#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: size of the memory space to allocates in bytes
 * @size: size of type
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{

void *ptr;

if (nmemb == 0 || size == 0)

return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)

{

return (NULL);

}

_memset(ptr, 0, size * nmemb);

return (ptr);

}

/**
 * _memset - functio that fills memory with constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: memory adress of function
 */

char *_memset(char *s, char b, unsigned int n)

{

unsigned int i;

char *tmp = s;

for (i = 0; i < n; i++)

{

*s = b;

s++;

										}

s = tmp;

return (s);

}
