#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the charcter to print
 * Return: on succes 1
 * on error, -1 is returned, and erros set appropriately
 */

int _putchar(char c)

{

return (write(1, &c, 1));

}
