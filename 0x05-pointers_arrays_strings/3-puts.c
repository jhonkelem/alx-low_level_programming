#include "main.h"

/**
 * _puts - function that prints string
 * @str: pointer to char
 * Return: Nothing
 */

void _puts(char *str)
{

	char *c;

	int m;



	c = str;



	for (m = 0; c[m]; m++)

	{

		_putchar (c[m]);

	}

	_putchar('\n');

}
