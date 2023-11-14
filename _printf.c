#include "main.h"
/**
 * _printf - The function that writes output to std
 * @format: To handle formated string
 *
 * Return: The counted output
 */
int _printf(const char *format, ...)
{
	int ls;
	va_list compile;
	va_start(compile, format);

	for (ls = 0; *format != '\0'; ls++)
	{
		if (*format == '%')
		{
			if (*(format + 1) == 'c')
			{
				char val = va_arg(compile, int);
				_putchar(val);
			}
			else if (*(format + 1) == 's')
			{
				_strlen(va_arg(compile, int);
			}
			else if (*(format + 1) == '%')
			{
				_putchar('%');
			}
			else
			{
				_putchar('%');
			}
			format += 2;
		}
		else
		{
			_putchar(*format);
			format++;
		}
	}
	va_end(compile);
	return (ls);
}
