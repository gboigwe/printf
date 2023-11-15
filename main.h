#ifndef MAIN_HEADER_H
#define MAIN_HEADER_H

#include <stdarg.h>
#include <stddef.h>

/* _putchar.c */
int _putchar(char c);

/* printf.c */
int _printf(const char *format, ...);
void char_print(va_list compile, int *ls);
void str_print(va_list compile, int *ls);
void per_print(va_list compile, int *ls);
void int_print(va_list compile, int *ls);

/**
 * struct specifier - structure made for convert specifiers
 * @fomat: This is the type of specifier
 * @f: The function pointer to the specifier
 */

typedef struct specifier
{
	char fomat;
	void (*handler)(va_list compile, int *);
} convert_specify;

#endif /* MAIN_HEADER_H */
