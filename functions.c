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

/**
*print_percent - print char at printf
*@lista: the main string passed to the function
*Return: Integer
*/
int print_int(va_list lista)
{
	int n = va_arg(lista, int);
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		write(1, '-', 1);
		count++;
		num = n * -1;
	}
	else
		num = n;

	count += putN(num, 10, "0123456789");
	return (count);
}

/**
*print_percent - print char at printf
*@lista: the main string passed to the function
*Return: Integer
*/
int putN(unsigned int n, unsigned int b, char *nums)
{
	int r = 1;

	if (n >= b)
		r += putN(n / b, b, nums);	

	write(1, nums[n % b], 1);
	return (r);
}