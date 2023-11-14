#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	all_compile m[] = {
		{"%s", string_prnt}, {"%c", char_prnt},
		{"%%", nu_prnt},
		{"%i", int_print}, {"%d", dec_print}, {"%r", revs_prnt},
		{"%R", rot13_prnt}, {"%b", bin_prnt}, {"%u", unsign_prnt},
		{"%o", octal_print}, {"%x", hex_prnt}, {"%X", hex_prnt},
		{"%S", exclu_str_prnt}, {"%p", point_prnt}
	};

	va_list compile;
	int i = 0, j, lent = 0;

	va_start(compile, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				lent += m[j].f(compile);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		lent++;
		i++;
	}
	va_end(compile);
	return (lent);
}
