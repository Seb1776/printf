#include "holberton.h"

/**
 * pr_char - Prints a character
 * @arg: Arguments
 *
 * Return: Printed chars
 */
int pr_char(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);
	return (1);
}

/**
 * pr_str - Prints a string
 * @arg: Arguments
 *
 * Return: Printed chars
 */
int pr_str(va_list arg)
{
	int i = 0;
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	for ( ; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * pr_Perc - Prints a % symbol
 * @arg: Arguments
 *
 * Return: Printed chars
 */
int pr_Perc(va_list __attribute__((unused)) arg)
{
	char perc = '%';

	_putchar(perc);
	return (1);
}

/**
 * pr_dec - Prints an int in decimal format
 * @arg: Arguments
 *
 * Return: Printed chars
 */
int pr_dec(va_list arg)
{
	int num, a = 0, sum = 0, dig, last, div = 1000000000;
	unsigned int i;

	num = va_arg(arg, int);

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		a++;
	}

	i = num;

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}

	while (div > 1)
	{
		dig = (i / div) % 10;
		sum += dig;

		if (sum != 0)
		{
			_putchar(dig + '0');
			a++;
		}

		div = div / 10;
	}

	last = i % 10;
	_putchar(last + '0');
	a++;

	return (a);
}
