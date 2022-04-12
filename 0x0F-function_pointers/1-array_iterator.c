#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - fuction that executes a function given as a parameter
 * on eache element of an array
 * @array: pointer to a name, passed from main file
 * @size: size of an array
 * @action: function pointer
 * Return: void
 */

void array_pointer(int *array, size_t size, void (*action) (int))
      
{

unsigned int i;

if ((*action) != NULL && array != NULL)

for (i = 0; i < size; i++)

(*action)(array[i]);

}
