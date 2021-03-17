#include "holberton.h"

/**
 * pr_bin - Prints an int in binary format
 * @arg: Arguments
 *
 * Return: Formatted int
 */
int pr_bin(va_list arg)
{
	unsigned int b = va_arg(arg, unsigned int);

	return (conv_binary(b));
}

/**
 * pr_oct - Prints an int in octal format
 * @arg: Arguments
 *
 * Return: Formatted int
 */
int pr_oct(va_list arg)
{
	unsigned int o = va_arg(arg, unsigned int);

	return (conv_octal(o));
}

/**
 * pr_hex - Prints an hex format (lowercase)
 * @arg: Arguments
 *
 * Return: Formatted int
 */
int pr_hex(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);

	return (conv_hex(n));
}

/**
 * pr_heX - Prints an int in hex format (uppercase)
 * @arg: Arguments
 *
 * Return: Formatted int
 */
int pr_heX(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);

	return (conv_heX(n));
}
