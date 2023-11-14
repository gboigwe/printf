#include "main.h"

/**
 * printf_char - prints out characters.
 * @value: arguments.
 * Return: 1.
 */
int char_prnt(va_list value)
{
	char str;

	str = va_arg(value, int);
	_putchar(str);
	return (1);
}
