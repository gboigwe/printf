#include "main.h"

/**
 * print_integer - This function prints an int
 * @compile: Taken the value of passed parameter
 * @ls: The pointer to the counting variable
 * Return: Returning void
 */

void int_print(va_list compile, int *ls)
{
	int n = va_arg(compile, int);
	int div = 1, i, resp;

	if (n < 0)
	{
		_putchar('-');
		*ls += 1;
	}
	for (i = 0; n / div > 9 || n / div < -9; i++)
		div *= 10;
	for (; div != 0; div /= 10)
	{
		resp = (n / div) % 10;
		if (resp < 0)
			resp *= -1;
		_putchar(resp + '0');
		*ls += 1;
	}
}
