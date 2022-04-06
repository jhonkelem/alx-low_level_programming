#include "main.h"

/**
 * _puts - function that prints a string, followed by new line, to stdout
 * @str: parameter defined in main
 * Return: void
 */

void _puts(char *str)

{

while (*str != '\0')

{

_putchar(*str);

str++;

}

_putchar('\n');

}
