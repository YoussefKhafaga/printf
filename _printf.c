#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
/* This is declared to bypass betty 40 lines per function requiremennt */
int _printf(const char *format, ...);
/**
 * _printf - print a string buffer to the stdout
 *
 * @format: input text to print to the stdout
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned long len = 0, i = 0;

	if (!format || !format[i])
	{
		exit(98);
	}

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%' && !format[i + 1])
		{
			write(1, &format[i], 1);
			return (1);
		}
		else if (format[i] == '%' && format[i + 1])
		{
			switch (format[++i])
			{
			case 'c':
				len = get_char(va_arg(args, int), len);
				break;
			case 's':
				len = get_string(va_arg(args, char *), len);
				break;
			case '%':
				len = get_percent(len);
				break;
			default:
				write(1, &format[i - 1], 2);
				len += 2;
				break;
			}
		}
		else
		{
		    write(1, &format[i], 1);
			len++;
		}
		i++;
	}

	va_end(args);
	return (len);
}

/**
 * get_length - get length of string.
 *
 * @str: string.
 *
 * Return: length of string.
 */
unsigned int get_length(char *str)
{
	unsigned int len = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (str[len])
	{
		len++;
	}
	return (len);
}



/**
 * get_char - get char from variadic function and record variadic position.
 *
 * @c: char to be recorded and stored.
 * @len: current length of stdout buffer.
 *
 * Return: updated length of stdout buffer.
 */
unsigned int get_char(char c, unsigned int len)
{
	write(1, &c, 1);
	return (++len);
}


/**
 * get_string - get char from variadic function and record variadic position.
 *
 * @str_format: string to be recorded and stored.
 * @len: current length of stdout buffer.
 *
 * Return: updated length of stdout buffer.
 */
unsigned int get_string(char *str_format, unsigned int len)
{
	write(1, str_format ? str_format : "(null)",
		  str_format ? get_length(str_format) : 6);

	return (len += str_format ? get_length(str_format) : 6);
}

/**
 * get_percent - get char from variadic function and record variadic position.
 *
 * @len: current length of stdout buffer.
 *
 * Return: updated length of stdout buffer.
 */
unsigned int get_percent(unsigned int len)
{
	write(1, "%", 1);
	return (++len);
}

