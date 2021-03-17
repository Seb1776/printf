#include "holberton.h"

/**
 * conv_heX - Uppercase hexadecimal conversor
 * @n: Given number
 *
 * Return: Converted to hex (uppercase)
 */
int conv_heX(unsigned int n)
{
	if (n < 16)
	{
		if (n < 9)
			_putchar(n + '0');

		else
			_putchar((n % 10) + 65);

		return (1);
	}

	return(1 + conv_heX(n / 16) +
	!_putchar(n % 16 < 9 ? n % 16 + '0' : ((n % 16) % 10) + 65));
}

/**
 * conv_hex - Lowercase hexadecimal conversor
 * @n: Given number
 *
 * Return: Converted to hex (lowercase)
 */
int conv_hex(long int n)
{
	if (n < 16)
	{
		if (n < 9)
			_putchar(n + '0');

		else
			_putchar((n % 10) + 97);

		return (1);
	}

	return(1 + conv_hex(n / 16) +
	!_putchar(n % 16 < 9 ? n % 16 + '0' : ((n % 16) % 10) + 97));
}

/**
 * conv_binary - Binery conversor
 * @n: Given number
 *
 * Return: Converted to binary
 */
int conv_binary(unsigned int n)
{
	if (n < 2)
	{
		_putchar(n + '0');
		return (1);
	}

	return (1 + conv_binary(n / 2) + !_putchar(n % 2 + '0'));
}

/**
 * conv_octal - Octal conversor
 * @n: Given number
 *
 * Return: Converted to octal
 */
int conv_octal(unsigned int n)
{
	if (n < 8)
	{
		_putchar(n + '0');
		return (1);
	}

	return (1 + conv_octal(n / 8) + !_putchar(n % 8 + '0'));
}
