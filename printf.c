#include "holberton.h"

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
				if (*format)
				{
				if (*format == 'c')
					format++, Bits += print_char(Lista_Of_argument);
				else if (*format == 's')
					format++, Bits += print_str(Lista_Of_argument);
				else if (*format == '%')
					format++, Bits += print_percent(Lista_Of_argument);
				else if (*format == 'd')
					format++, Bits += print_int(Lista_Of_argument);
				else if (*format == 'i')
				format++, Bits += print_int(Lista_Of_argument);
				else if (*format == ' ' && *format++ == '%')
				format++, Bits += print_percent(Lista_Of_argument);
				else
				{
					Bits += print_percent(Lista_Of_argument);
					write(1, &(*format++), 1);
				}
				}
			}
			else
			{
				write(1, &(*format++), 1);
				Bits++;
			}
		}
		if (format == NULL)
		return (-1);
		va_end(Lista_Of_argument);
		return (Bits);
}
