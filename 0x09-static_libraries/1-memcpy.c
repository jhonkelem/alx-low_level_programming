#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area
 * @dest: parameter define in main, pointer to memory area
 * @src: pointer to another meory area(src)
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
