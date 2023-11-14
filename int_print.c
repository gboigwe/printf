#include "main.h"
/**
 * int_print - prints out integer
 * @param: argument parameter to be printed
 * Return: The number of characters out
 */
int int_print(va_list param)
int dec_print(va_list param)
int int_print(va_list param)
{
	int var = va_arg(param, int);
	int  i = 1;
	int nums, final = var % 10, fig, exp = 1;

	var = var / 10;
	nums = n;

	if (final < 0)
	{
		_putchar('-');
		nums = -nums;
		var = -var;
		final = -final;
		i++;
	}
	if (nums > 0)
	{
		while (nums / 10 != 0)
		{
			exp = exp * 10;
			nums = nums / 10;
		}
		nums = var;
		while (exp > 0)
		{
			fig = nums / exp;
			_putchar(fig + '0');
			nums = nums - (fig * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(final + '0');

	return (i);
}

/**
 * dec_print - prints out decimal
 * @param: Argument parameter to be printed
 * Return: The number of characters printed out
 */

int dec_print(va_list param)
{
	int var = va_arg(param, int);
	int nums, final = var % 10, fig;
	int  i = 1;
	int exp = 1;

	var = var / 10;
	nums = var;

	if (final < 0)
	{
		_putchar('-');
		nums = -nums;
		var = -var;
		final = -final;
		i++;
	}
	if (nums > 0)
	{
		while (nums / 10 != 0)
		{
			exp = exp * 10;
			nums = nums / 10;
		}
		nums = var;
		while (exp > 0)
		{
			fig = nums / exp;
			_putchar(fig + '0');
			nums = nums - (fig * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(final + '0');

	return (i);
}
