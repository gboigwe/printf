#include "main.h"
/**
 * print_char - This function prints out a character
 * @compile: The argument to be taken
 * @ls: The pointer to the counting variable
 */
void char_print(va_list compile, int *ls)
{
	int k = va_arg(compile, int);

	_putchar(k);
	(*ls)++;
}
