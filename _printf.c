#include <stdarg.h>
#include "main.h"


/**
 * _printf - Takes format to standard output
 * @format: character string
 * Return: The number of characters to be printed
 */
int _printf(const char *format, ...)
{
	int j;
	int i = 0, ls = 0;
	va_list compile;
	convert_specify specify[] = {
			{'c', char_print},
			{'s', str_print},
			{'%', per_print},
			{'d', int_print},
			{'i', int_print},
			{'\0', NULL}
	};

	va_start(compile, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (specify[j].fomat != '\0')
			{
				if (format[i] == specify[j].fomat)
				{
					specify[j].handler(compile, &ls);
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			ls++;
		}
		i++;
	}
	va_end(compile);
	return (ls);
}
