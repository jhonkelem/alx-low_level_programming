#include "main.h"

/**
 * print_square - write a function to print a square
 * @size: takes in the size of the square
 * Return: Always 0 (success)
 */

void print_square(int size)

{

int i;
int k;

if (size > 0)

{

for (i = 0; i < size; i++)

{

for (k = 0; k < size; k++)

{

_putchar (35);

}

_putchar ('\n');


}


}

else

{

_putchar ('\n');

}



}
