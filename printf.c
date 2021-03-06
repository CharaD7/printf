#include "main.h"
#include <stdio.h>

/**
 * printTypeChecker - Checks for the characters(special) provided in the
 * printf function
 *
 *  @car: Character that comes after the % symbol
 *
 *  @arg: Checker argument
 *
 *  Return: The number of characters needed
 */

int printTypeChecker(char car, va_list arg)
{
	int arrIndex;

	TypeStruct argArr[] = {
		{"c", ret_char},
		{"s", ret_str},
		{"d", ret_int},
		{"i", ret_int},
		{"u", ret_unsigned},
		{"b", ret_unsignedToBinary},
		{"o", ret_oct},
		{"x", ret_hex},
		{"X", ret_HEX},
		{"S", ret_STR},
		{NULL, NULL}
	};

	for (arrIndex = 0; argArr[arrIndex].t != NULL; arrIndex++)
	{
		if (argArr[arrIndex].t[0] == car)
		{
			return (argArr[arrIndex].out(arg));
		}
	}

	return (0);
}

/**
 * _printf - Our custom printf function based on C's
 *
 * @format : Character stream to be used
 *
 * Return: Characters or -1 when datatype does not exist
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	int typeChecked = 0, charReturned = 0;

	va_list arg;

	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			charReturned++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			charReturned++;
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);

		typeChecked = printTypeChecker(format[i + 1], arg);
		if (typeChecked == -1 || typeChecked != 0)
			i++;
		if (typeChecked > 0)
			charReturned += typeChecked;
		if (typeChecked == 0)
		{
			_putchar('%');
			charReturned++;
		}
	}
	va_end(arg);
	return (charReturned);
}
