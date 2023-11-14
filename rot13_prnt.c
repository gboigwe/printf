#include "main.h"
/**
 * rot13_prnt - prints out strings to ROT13 place
 * @param: type struct va_arg where is allocated printf arguments
 * Return: ls is returned
 *
 */
int rot13_prnt(va_list param)
{
	int i, j, ls = 0;
	int k = 0;
	char *s = va_arg(param, char*);
	char alphabeth[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char betalpha[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; alphabeth[j] && !k; j++)
		{
			if (s[i] == alphabeth[j])
			{
				_putchar(betalpha[j]);
				ls++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			ls++;
		}
	}
	return (ls);
}
