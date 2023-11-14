#include "main.h"

/**
 * octal_print - printing an octal number.
 * @value: Arguments to be taken.
 * Return: ls to be returned.
 */
int octal_print(va_list value)
{
	int i;
	int ls = 0;
	int *arry;
	unsigned int nums = va_arg(value, unsigned int);
	unsigned int tmpr = nums;

	while (nums / 8 != 0)
	{
		nums /= 8;
		ls++;
	}
	ls++;
	arry = malloc(ls * sizeof(int));

	for (i = 0; i < ls; i++)
	{
		arry[i] = tmpr % 8;
		tmpr /= 8;
	}
	for (i = ls - 1; i >= 0; i--)
	{
		_putchar(arry[i] + '0');
	}
	free(arry);
	return (ls);
}
