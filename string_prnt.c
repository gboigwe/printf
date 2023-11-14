#include "main.h"
/**
 * string_prnt - printing a string.
 * @value: Make argument input.
 * Return: the length of the string.
 */

int string_prnt(va_list value)
{
	int i;
	char *s;
	int lent;

	s = va_arg(value, char *);
	if (s == NULL)
	{
		s = "(null)";
		lent = _strlen(s);
		for (i = 0; i < lent; i++)
			_putchar(s[i]);
		return (lent);
	}
	else
	{
		lent = _strlen(s);
		for (i = 0; i < lent; i++)
			_putchar(s[i]);
		return (lent);
	}
}
