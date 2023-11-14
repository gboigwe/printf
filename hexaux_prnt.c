#include "main.h"
/**
 * hexaux_prnt - prints an hexadec number.
 * @nums: number to print.
 * Return: ls.
 */
int hexaux_prnt(unsigned int nums)
{
	int i;
	int *arry;
	int ls = 0;
	unsigned int temp = nums;

	while (nums / 16 != 0)
	{
		nums /= 16;
		ls+;
	}
	ls++;
	arry = malloc(ls * sizeof(int));

	for (i = 0; i < ls; i++)
	{
		arry[i] = temp % 16;
		temp /= 16;
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
