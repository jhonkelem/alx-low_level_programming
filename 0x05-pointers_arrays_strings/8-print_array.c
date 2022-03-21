#include "main.h"

/**
 * print_array - prints n elememnts of an array of integers
 * @a: a pointer to an int
 * @n: Return value n
 * Return: void
 */

void  print_array(int *a, int n)
{
int i;



i = 0;

while (i < n)

{

	printf("%d", a[i]);



	if (i < n - 1)

	{

		printf(", ");

	}



	i++;

}



printf("\n")

;

}
