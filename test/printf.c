#include "holberton.h"
#include <unistd.h>
#include <stdarg.h>

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
			switch(*format)
			{
			case 'c':
				Bits += print_Character(Lista_Of_argument);
				format++;
				break;
			case 's':
				Bits += print_str(Lista_Of_argument);
				format++;
				break;	
			case '%':
				print_percent(Lista_Of_argument);
				format++;
				break;
			}
		}
		else
		{
			write(1,&(*format++),1);
			Bits++;
		}
		}
		va_end(Lista_Of_argument);
	return (0);
}
