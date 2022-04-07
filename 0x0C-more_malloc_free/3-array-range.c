#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of range from max to min
 * @min: int define in main
 * @max: int define in main
 * Return: pointer to the array
 */

int *array_range(int min, int max)

{

int a;
int i;
int *ptr;
int *tmp;

if (min > max)

return (NULL);

ptr = malloc(((max - min) + 1) * sizeof(int));

if (ptr == NULL)

{
										return (NULL);
										}

tmp = ptr;

a = min;

for (i = 0; i < ((max - min) + 1) ; i++)
										{

										*ptr = a;
										ptr++;
										a++;
										}
										ptr = tmp;
										return (ptr);

}
