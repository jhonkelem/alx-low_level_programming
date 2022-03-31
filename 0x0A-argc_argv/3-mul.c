#include "main.h"
#include <stdio.h>

/**
 * main - program that multuplies two numbers
 * @argc: argumet count for main
 * @argv: vector to the argument
 * Return: result of multiply or 1
 */

int main(int argc, char *argv[])

{

int a, b, result;

if (argc <= 2)

{

printf("Error\n");
return (1);

}

/* atoi convert a string to an int */
a = atoi(argv[1]);
b = atoi(argv[2]);

result = (a*b);
printf("%d\n", result);

return (0);

}
