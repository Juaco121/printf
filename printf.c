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
				if (*format == ' ' || *format == '\t')
				{
					while (((*format) == ' ') || ((*format) == '\t'))
					format++;
				}
				if (*format == '%')
					Bits += print_percent(Lista_Of_argument), format++;
				else if (*format == 's')
					Bits += print_str(Lista_Of_argument), format++;
				else if (*format == 'c')
					Bits += print_char(Lista_Of_argument), format++;
				else if (*format == 'd')
					format++, Bits += print_int(Lista_Of_argument);
				else if (*format == 'i')
				format++, Bits += print_int(Lista_Of_argument);
				else
				{
					write(1, "%%", 1);
					Bits++;
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
