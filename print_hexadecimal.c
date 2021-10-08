#include "main.h"

/**
 * ret_hex_base - base function for printing hexadecimal numbers
 *
 * @arg: argument list containing hexadecimal
 *
 * @_case: a  in caps on lower, printing the hex number in caps in lower
 *
 * Return: number of digits printed
 */

int ret_hex_base(va_list arg, char _case)
{
	unsigned int num = va_arg(arg, unsigned int);
	int nbrCharacters;

	if (num == 0)
		return (_putchar('0'));
	nbrCharacters = ret_unsignedIntToHex(num, _case);

	return (nbrCharacters);
}

/**
 * ret_hex - prints a hexadecimal in lower case
 *
 * @arg: list that contains hexadecimal to print
 *
 * Return: number of digits printed
 */

int ret_hex(va_list arg)
{
	return (ret_hex_base(arg, 'a'));
}

/**
 * ret_HEX - prints a hexadecimal in upper case
 *
 * @arg: list that contains hexadecimal to print
 *
 * Return: number of digits printed
 */

int ret_HEX(va_list arg)
{
	return (ret_hex_base(arg, 'A'));
}
