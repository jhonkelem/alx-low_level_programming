#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two positive numbers
 * @argc: argument count, must be 3
 * @argv: arguments, argv[1] and argv[2]
 * Return: product of argv[1] by argv[2]
 */

int main(int argc, char *argv[])

{

char *num1, *num2;

int i, j, k, len1, len2, len, d1, d2, d1d2, carry, *mul;

if (argc != 3 || !(_isnumber(argv[1])) || !(_isnumber(argv[2])))

_error(), exit(98);

num1 = argv[1], num2 = argv[2];

len1 = _strlen(num1), len2 = _strlen(num2), len = len1 + len2;

mul = _calloc(len, sizeof(int));

if (mul == NULL)

exit(98);

for (i = len1 - 1; i >= 0; i--)

{

d1 = num1[i] - '0';
carry = 0;

for (j = len2 - 1; j >= 0; j--)
										{
										d2 = num2[j] - '0';
										d1d2 = d1 * d2;
										mul[i + j + 1] += d1d2 % 10;																	carry = d1d2 / 10;
										if (mul[i + j + 1] > 9)								
										{		
										mul[i + j] += mul[i + j + 1] / 10;
										mul[i + j + 1] = mul[i + j + 1] % 10;
																				}
										mul[i + j] += carry;
										}

for (k = 0; mul[k] == 0 && k < len; k++)
									
if (k == len)

_putchar(mul[len - 1] + '0');

else

{
										for (i = k; i < len; i++)
										_putchar(mul[i] + '0');
										}

_putchar('\n');

free(mul);

return (0);

}


