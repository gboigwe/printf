#include "main.h"
/**
 * unsign_prnt - prints out unsigned integer
 * @param: Paramenter argument to printed out
 * Return: The number of characters returned
 */
int unsign_prnt(va_list param)
{
	unsigned int n = va_arg(param, unsigned int);
	int nums, final = n % 10, fig, finish = 1;
	int  i = 1;

	n = n / 10;
	nums = n;

	if (final < 0)
	{
		_putchar('-');
		nums = -nums;
		n = -n;
		final = -final;
		i++;
	}
	if (nums > 0)
	{
		while (nums / 10 != 0)
		{
			finish = finish * 10;
			nums = nums / 10;
		}
		nums = n;
		while (finish > 0)
		{
			fig = nums / finish;
			_putchar(fig + '0');
			nums = nums - (fig * finish);
			finish = finish / 10;
			i++;
		}
	}
	_putchar(final + '0');

	return (i);
}
