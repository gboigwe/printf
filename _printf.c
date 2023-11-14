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

	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (*(format + 1) == 'c')
			{
				char val = va_arg(compile, int);
				_putchar(val);
				ls++;
			}
			else if (*(format + 1) == 's')
			{
				const char *cha = va_arg(compile, const char *);
				while (*cha != '\0')
				{
					_putchar(*cha);
					cha++;
					ls++;
				}
			}
			else if (*(format + 1) == '%')
			{
				_putchar('%');
				ls++;
			}
			else
			{
				_putchar('%');
				ls++;
			}
			format += 2;
		}
		else
		{
			_putchar(*format);
			ls++;
			format++;
		}
	}
	va_end(compile);
	return (ls);
}
