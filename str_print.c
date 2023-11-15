#include "main.h"

/**
 * print_string - Printing a string out
 * @compile: Taken the arg parameter into consideration
 * @ls: This points to the counting variable
 */
void str_print(va_list compile, int *ls)
{
	int k;
	char *str = va_arg(compile, char *);

	if (str == NULL)
		str = "(null)";
	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
		(*ls)++;
	}
}
