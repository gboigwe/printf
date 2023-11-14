#include "main.h"

/**
 * point_prnt - prints an hexadec number.
 * @value: Value arguments taken.
 * Return: counting with loop.
 */
int point_prnt(va_list value)
{
	long int a;
	int b;
	int c;
	void *pnt;
	char *str = "(nil)";

	p = va_arg(value, void*);
	if (pnt == '\0')
	{
		for (c = 0; str[c] != '\0'; c++)
		{
			_putchar(str[c]);
		}
		return (c);
	}

	a = (unsigned long int)pnt;
	_putchar('0');
	_putchar('x');
	b = hexaux_prnt(a);
	return (b + 2);
}
