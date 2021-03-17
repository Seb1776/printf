#include "holberton.h"

/**
 * pr_Str - Print argument non-printable char to ASCII hexa-values
 * @arg: Arguments
 *
 * Return: Amount of characters printed
 */
int pr_Str(va_list arg)
{
	char *str = va_arg(arg, char *);
	int i = 0, j = 0;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	while (str[j] != '\0' && str[j] > 0)
	{
		if (str[j] >= 32 && str[j] < 127)
		{
			_putchar(str[j]);
			i++;
		}

		else
		{
			_putchar('\\');
			_putchar('x');

			i += 2;

			if (str[i] < 16)
			{
				_putchar('0');
				i++;
			}

			i += conv_heX(str[i]);
		}

		j++;
	}

	return (i);
}

/**
 * pr_ptr - Prints a pointer address
 * @arg: Arguments
 *
 * Return: Number of characters printed
 */
int pr_ptr(va_list arg)
{
	long add = va_arg(arg, long);

	if (add == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}

	if (add < 0)
	{
		write(1, "0xffffffffffffffff", 18);
		return (18);
	}

	_putchar('0');
	_putchar('x');
	return (conv_hex(add) + 2);
}

/**
 * pr_rev - Prints a reversed string
 * @arg: Arguments
 *
 * Return: Number of printed chars
 */
int pr_rev(va_list arg)
{
	char *str = va_arg(arg, char *);
	int i = 0, size = 0;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	while (str[size] != '\0')
	{
		size++;
		i++;
	}

	size--;

	while (size >= 0)
	{
		_putchar(str[size]);
		size--;
	}

	return (i);
}

/**
 * pr_ROT - Prints an string in ROT13 cipher
 * @arg: Arguments
 *
 * Return: Formatted int
 */
int pr_ROT(va_list arg)
{
	char *str = va_arg(arg, char *);
	int i;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	for (i = 0; str[i] != '0'; i++)
	{
		if (str[i] >= 110 && str[i] <= 122)
			_putchar(str[i] - 13);

		else if (str[i] >= 78 && str[i] <= 90)
			_putchar(str[i] - 13);

		else if (str[i] >= 97 && str[i] <= 107)
			_putchar(str[i] + 13);

		else if (str[i] >= 65 && str[i] <= 77)
			_putchar(str[i] + 13);

		else
			_putchar(i);
	}

	return (i);
}
