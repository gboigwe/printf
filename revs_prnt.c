#include "main.h"
/**
 * revs_prnt - This function reverses string with printf
 * @param: type struct va_arg where is allocated printf arguments
 *
 * Return: the string to be reversed
 */
int revs_prnt(va_list param)
{

	char *s = va_arg(param, char*);
	int i, j;
	j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
