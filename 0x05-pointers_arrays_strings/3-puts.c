#include "main.h"

/**
 * _puts - function that prints string
 * @str: pointer to char
 * Return: Nothing
 */

void _puts(char *str)
{

	 int l = 0;

	  
	 while (*(str + l) != '\0')
		   
	 {
			       
	   _putchar (str[l]);
			       
	   l++;
			     
	 }

        _putchar ('\n');

}

