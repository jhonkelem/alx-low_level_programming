#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by new line
 * @separator: pointer to separator
 * @n: const unsigned int passed from main
 * count argument indicating the number
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{

va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)

{
										printf("%i", va_arg(args, int));
										if (i != n - 1)
										if (separator)
																				printf("%s", separator);
										}

printf("\n");

va_end(args);

}
