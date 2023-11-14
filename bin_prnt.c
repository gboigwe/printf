#include "main.h"

/**
 * bin_prnt - prints a binary number.
 * @value: arguments.
 * Return: 1.
 */
int bin_prnt(va_list value)
{
	int i, a = 1, b;
	int ls = 0;
	int flag = 0;
	unsigned int pnt;
	unsigned int nums = va_arg(value, unsigned int);

	for (i = 0; i < 32; i++)
	{
		pnt = ((a << (31 - i)) & nums);
		if (pnt >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = pnt >> (31 - i);
			_putchar(b + 48);
			ls++;
		}
	}
	if (ls == 0)
	{
		ls++;
		_putchar('0');
	}
	return (ls);
}
