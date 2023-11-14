#include "main.h"
/**
 * _strlen - Returns the lent of the string.
 * @s: Type char pointer
 * Return: c.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * _strlentc - Strlength function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: c
 */
int _strlentc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
