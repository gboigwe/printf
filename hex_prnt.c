#include "main.h"

/**
 * hex_prnt - prints an hexadec number.
 * @value: Values to be considered.
 * Return: counter.
 */
int hex_prnt(va_list value)
{
	int i;
	int *arry;
	int ls = 0;
	unsigned int nums = va_arg(value, unsigned int);
	unsigned int tmpr = nums;

	while (nums / 16 != 0)
	{
		nums /= 16;
		ls++;
	}
	ls++;
	arry = malloc(ls * sizeof(int));

	for (i = 0; i < ls; i++)
	{
		arry[i] = tmpr % 16;
		tmpr /= 16;
	}
	for (i = ls - 1; i >= 0; i--)
	{
		if (arry[i] > 9)
			arry[i] = arry[i] + 7;
		_putchar(arry[i] + '0');
	}
	free(arry);
	return (ls);
}
