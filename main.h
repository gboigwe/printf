#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - The conversion specifiers for printf all matched
 * @fmt_id: type char pointer of the conversation specifier
 * @fn: The function to pointer for conversion specifier
 *
 */

typedef struct fmting
{
	char *fmt_id;
	int (*fn)();
} all_compile;

int point_prnt(va_list value);
// int printf_hex_aux(unsigned long int num);
int hexaux_prnt(unsigned int nums);
int hex_prnt(va_list value);
int exclu_str_prnt(va_list value);
int hexaux_prnt(unsigned int nums);
int octal_print(va_list value);
int unsign_prnt(va_list param);
int bin_prnt(va_list value);
int revs_prnt(va_list param);
int rot13_prnt(va_list param);
int int_print(va_list param);
int dec_print(va_list param);
int _strlen(char *s);
int _strlentc(const char *s);
int *_strcpy(char *dest, char *src);
int rev_string(char *s);
int nu_prnt(void);
int char_prnt(va_list value);
int string_prnt(va_list value);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
