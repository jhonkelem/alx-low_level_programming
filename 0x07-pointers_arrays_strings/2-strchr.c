#include "main.h"

/**
 * _strchr - locates charcter in a string
 * @s: string
 * @c: charcter to search
 * Return: pointer to the first occurance of the charcter c in the string s
 */

char *_strchr(char *s, char c)

{

while (*s != '\0') /*Declaring WHILE*/

{

if (*s == c) /*if s ==  c*/

{

return (s); /*return s*/

}

++s;

}

if (*s == c)

{

return (s);

}

return (0);/* values null*/

}
