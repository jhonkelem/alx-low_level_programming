#include "main.h"

/**
 *puts_half - prints every other character of a string
 *@str: a pointer to an int
 *
 * Return: not
 */

void puts_half(char *s)
{

	int i, last;

	i = 0;

	while (str[i] != '\0')

	{

		i++;

	}



	last = (i + 1) / 2;



	for (i = last; str[i]; i++)

	{

		_putchar (str[i]);

	}



	_putchar ('\n');

}
