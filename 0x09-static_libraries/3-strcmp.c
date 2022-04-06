#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compare two strings
 * @s1: string 1 to compare
 * @s2: string 2 to compare
 * Return: return 15 or -15 or 0
 */

int _strcmp(char *s1, char *s2)

{

char *tmp1 = s1;
char *tmp2 = s2;

while (*s1 != '\0')

{

if (*s1 == *s2)

{

s1++;
										s2++;
										}

else

{

if (*s1 > *s2)
										return (*s1 - *s2);

else if (*s1 < *s2)
										return (*s1 - *s2);
										s1++;
										s2++;
										}

}

return (0);

}
