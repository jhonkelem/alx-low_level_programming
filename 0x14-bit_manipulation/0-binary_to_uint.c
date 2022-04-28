#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: b is pointing to a string of 0 and 1 chars
 *
 * Return: unsigned integer, converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int temp = 0, sum = 0;
	int i, len = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	i = 0;
	while (b[i] != '\0')
	{
		if ((b[i] != '0' && b[i] != '1'))
			return (0);
		temp = (b[i] - 48) * _pow_recursion(2, (len - 1) - i);
		sum += temp;
		i++;
	}
	return (sum);
}

