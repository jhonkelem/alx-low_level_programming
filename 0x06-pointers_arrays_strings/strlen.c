/**
 * _strlen - provide string length.
 * @s: the string in question.
 * Return: the lenght of string.
 */

int _strlen(char *s)
{
unsigned int i;

i = 0;
while (s[i] != '\0')
	i++;

return (i);
}
