#include "main.h"

/**
 * ret_binary - A function that prints the binary representation of a number
 *
 * @n: number to be printed in binary
 *
 * @printed: hold the number of characters printed
 */
void ret_binary(unsigned int n, unsigned int *printed)
{
	if (n > 1)
	{
		*printed += 1;
		ret_binary(n >> 1, printed);
	}
	_putchar((n & 1) + '0');
}
