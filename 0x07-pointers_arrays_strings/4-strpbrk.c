#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - matches any character specified
 * @s: this is the c string to be scanned
 * @accept: charcter in str1 that matches one of the characters in str2
 * Return: string s that matches any charcter specified in accept
 */

char *_strpbrk(char *s, char *accept)

{

unsigned int i;

unsigned int j;



for (i = 0; s[i] != '\0'; i++)

{

for (j = 0; accept[j] != '\0'; j++)
										{

										if (s[i] == accept[j])
										return (&s[i]);
										}

}

return (NULL);

}
