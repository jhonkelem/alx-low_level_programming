#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count for main
 * @argv: vector to the argument
 *Return: void
 */

int main(int argc, char *argv[])

{

/* to surpass unused variable warning*/
argv = argv;
printf("%d\n", argc - 1);
return (0);

}

