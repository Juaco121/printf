#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"
#include <limits.h>
#include <unistd.h>
/**
*print_char - print char at printf
*@functions: the main string passed to the function 
*Return: Integer
*
*/

int print_Character(va_list lista)
{
      /*char Solve_Character = (char)va_arg(lista, int);*/

      /*write(1,&Solve_Character,1);*/
      _putchar(va_arg(lista, int));
      return (1);
}

/**
*print_percent - print char at printf
*@lista: the main string passed to the function 
*Return: Integer
*
*/
int print_percent(va_list lista)
{
      char *str = va_arg(lista, int);
      write(1,str,1);
      /*_putchar("%");*/
      return(1);
}

/**
*print_str - print char at printf
*@lista: the main string passed to the function 
*Return: Integer
*
*/
int print_str(va_list lista)
{
      unsigned int count = 0;
      
      
      char *str = va_arg(lista, char *);
      /*_putchar((char)*str);*/
      if (!str)
      {
            char *s = "(null)";
            str = s;
            while(*s)
            write(1,&(*s++),1);
            return(6);
      }

      while (*str)
      {
            write(1,&(*str++),1);
            /*_putchar((char)*str);*/
            count++;
      }
      return (count);
}