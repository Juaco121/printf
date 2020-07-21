#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"
#include <limits.h>
#include <unistd.h>
/**
*print_char - print char at printf
*@lista: the main string passed to the function
*Return: Integer
*/

int print_char(va_list lista)
{
	_putchar(va_arg(lista, int));
	return (1);
}

/**
*print_percent - print char at printf
*@lista: the main string passed to the function
*Return: Integer
*/
int print_percent(__attribute__((unused))va_list lista)
{
	write(1, "%%", 1);
	return (1);
}

/**
*print_str - print char at printf
*@lista: the main string passed to the function
*Return: Integer
*/
int print_str(va_list lista)
{
	unsigned int count = 0;

	char *str = va_arg(lista, char *);

	if (!str)
	{
		char *s = "(null)";

		str = s;

		while (*s)
		write(1, &(*s++), 1);
		return (6);
	}

	while (*str)
	{
		write(1, &(*str++), 1);
		count++;
	}
	return (count);
}
