#include "holberton.h"
#include <unistd.h>
#include <stdarg.h>


/**
*_printf - print char at printf
*@format: the main string passed to the function
*Return: Integer
*/

int _printf(const char *format, ...)
{
		va_list Lista_Of_argument;
		int Bits = 0;

		va_start(Lista_Of_argument, format);
		while (format && *format)
		{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				format++;
				Bits += print_char(Lista_Of_argument);
				break;
			case 's':
				format++;
				Bits += print_str(Lista_Of_argument);
				break;
			case '%':
				format++;
				Bits += print_percent(Lista_Of_argument);
				break;
			case 'd':
				format++;
				Bits += print_int(Lista_Of_argument);
				break;
			case 'i':
				format++;
				Bits += print_int(Lista_Of_argument);
				break;
			}
		}
		else
		{
			write(1, &(*format++), 1);
			Bits++;
		}
		}
		va_end(Lista_Of_argument);
	return (Bits);
}
