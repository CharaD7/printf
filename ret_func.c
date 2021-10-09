#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * ret_char - Writes a character to the stdout
 *
 * @arg: Argument supplied
 *
 * Return: 0 for success -1 for failure.
 */

int ret_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * ret_str - Writes a string(a stream of characters)
 *
 * @arg:  Argument supplied
 *
 * Return: Stream of characters it holds
 */

int ret_str(va_list arg)
{
	int i;

	char *str = va_arg(arg, char*);

	if (str == NULL)
	{
		str = "(null)";
	}

	else if (*str == '\0')
	{
		return (-1);
	}

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}

	return (i);

}

/**
 * ret_int - prints an integer.
 * @arg: argument
 * Return: 0
 */

int ret_int(va_list arg)
{

	unsigned int divisor = 1, i, resp, charReturned = 0;
	int n = va_arg(arg, int);

	if (n < 0)
	{
		_putchar('-');
		charReturned++;
		n *= -1;
	}

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
	;

	for (; divisor >= 1; n %= divisor, divisor /= 10, charReturned++)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
	return (charReturned);
}



/**
 * ret_STR - prints a string with a `S` (upper case) specificer
 * @arg: argument
 * Return: number of character printed
 */

int ret_STR(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";
	else if (*str == '\0')
		return (-1);

	for (i = 0; str[i]; i++)
	{
		if ((str[i] < 32 && str[i] > 0) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (i < 16)
				_putchar('0');

			print_unsignedIntToHex(str[i], 'A');
		}
		else
			_putchar(str[i]);
	}

	return (i);
}

{
	int divisor = 1, i, resp;
	unsigned int n = va_arg(arg, unsigned int);

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
	;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
	return (i + 1);
}
