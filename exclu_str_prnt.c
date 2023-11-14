#include "main.h"
/**
 * exclu_str_prnt - Exclusuive strings are printed.
 * @value: Value in.
 * Return: The length of the string.
 */

int exclu_str_prnt(va_list value)
{
	char *str;
	int i, lent = 0;
	int make;

	s = va_arg(value, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			lent = lent + 2;
			make = s[i];
			if (make < 16)
			{
				_putchar('0');
				lent++;
			}
			lent = lent + hexaux_prnt(make);
		}
		else
		{
			_putchar(s[i]);
			lent++;
		}
	}
	return (lent);
}
