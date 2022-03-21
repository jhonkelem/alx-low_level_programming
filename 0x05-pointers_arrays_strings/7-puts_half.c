#include "main.h"

/**
 * puts_half - prints every other character of a string
 * @str: a pointer to an int
 * Return: not
 */

void puts_half(char *s)
{
int len = 0;

char *y = str;

int n;

 
while (*y != '\0')
	  
	  {
		      
		  y++;
		      
		  len++;
		    
	  }


if (len % 2 == 0)
	  
	  {
		      
		  n = len / 2;
		    
	  }

else
	  
	  {
		      
		  n = (len + 1) / 2;
		    
	  }


for (; n < len; n++)
	  
	  {
		      
		  _putchar (str[n]);
		    
	  }


_putchar ('\n');

}
