#include "main.h"
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
