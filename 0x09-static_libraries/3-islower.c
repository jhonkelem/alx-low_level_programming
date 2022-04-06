#include "main.h"

/**
 * _islower - check for lowercase charcter
 * @c: parameter hard-coded in main fuction
 * Return: 0 or 1
 */

int _islower(char c)

{

int i;

if (c >= 'A' && c <= 'Z')

{

i = 0;

}

else if (c >= 'a' && c <= 'z')

{

i = 1;

}

return (i);

}
