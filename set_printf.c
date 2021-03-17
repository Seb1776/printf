#include "holberton.h"

/**
* set_printf - Identify the function that matches the format
* @forma: Conversion specifier symbol
* Return: Associated function
*/

int (*set_printf(char forma))(va_list)
{
	int i;

	_printf_ f[] = {
	{"c", pr_char},
	{"s", pr_str},
	{"%", pr_Perc},
	{"d", pr_dec},
	{"i", pr_dec},
	{"b", pr_bin},
	{"u", pr_dec},
	{"o", pr_oct},
	{"x", pr_hex},
	{"X", pr_heX},
	{"S", pr_Str},
	{"p", pr_ptr},
	{"r", pr_rev},
	{"R", pr_ROT},
	{NULL, NULL}
	};

	for (i = 0; f[i].ft != NULL; i++)
	{
		if (forma == *f[i].ft)
			return (f[i].f);
	}

	return (NULL);
}
