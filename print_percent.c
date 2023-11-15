#include "main.h"

/**
 * print_percent - This function prints a percent of character
 * @compile: Taken into consideration nonused argument
 * @ls: The pointer to the counting variable
 */
void per_print(va_list compile, int *ls)
{
	(void)compile;
	_putchar('%');
	(*ls)++;
}
