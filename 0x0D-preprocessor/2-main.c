#include <stdio.h>
#include <stdlib.h>
#ifndef __FILE__
#define __FILE__
#endif

/**
 * main - program that prints the name of the file it was comiled
 * Return: zero
 */

int main(void)

{

printf("%s\n", _FILE_);

return (0);

}