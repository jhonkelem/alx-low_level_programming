#include "main.h"

/**
 * wildcmp - compare two strings
 * @s1: 1st string to be compared
 * @s2: second string containing '*' or not
 * return: return 1 if strings can be considered and 0
 */


int wildcmp(char *s1, char *s2)

{
if (*s1 == '\0')
{

if (*s2 != '\0' && *s2 == '*')

{

return (wildcmp(s1, s2 + 1));

}

return (*s2 == '\0');

}

if (*s2 == '*')

{

return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

}

else if (*s1 == *s2)

{

return (wildcmp(s1 + 1, s2 + 1));

}

return (0);

}
