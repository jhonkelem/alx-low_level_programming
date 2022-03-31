#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all the argument it receives
 * @argc: argument count for main
 * @argv: vector to the argument
 * Return: 0
 */

int main(int argc, char *argv[])

{

while (argc--)
printf("%s\n", *argv++);

return (0);

}
