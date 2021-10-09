#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int ret_char(va_list arg);
int ret_str(va_list arg);
int _putchar(char c);
int ret_int(va_list arg);
int ret_percent(void);
void ret_binary(unsigned int n, unsigned int *printed);
int ret_unsignedToBinary(va_list arg);
int ret_oct(va_list arg);
int ret_unsignedIntToHex(unsigned int num, char _case);
int ret_hex_base(va_list arg, char _case);
int ret_hex(va_list arg);
int ret_HEX(va_list arg);
int ret_STR(va_list arg);
int ret_unsigned(va_list arg);

/**
 * struct TypeStruct - The structure of our own defined type
 *
 * @t: Type to use
 *
 * @out: Function to handle the returns
 */

typedef struct TypeStruct
{
	char *t;

	int (*out)(va_list);
} TypeStruct;

#endif
