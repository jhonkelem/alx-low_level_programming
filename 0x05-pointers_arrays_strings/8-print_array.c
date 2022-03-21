#include "main.h"

/**
 * print_array - prints n elememnts of an array of integers
 * @a: a pointer to an int
 * @n: Return value n
 * Return: nothing
 */

void  print_array(int *a, int n)
{
int x;

 
for (x = 0; x < n; x++)
	  
	  {
		      
		  printf ("%d", a[x]);
		      
		  if (x != n - 1)
			        
			        {
						
					printf (", ");
					      
				}
		    
	  }


printf ("\n");

}
