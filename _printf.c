#include "main.h"

/**
 * _printf - Print Custom
 * @format: format
 *
 * Return: Chars
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list args;
	char c;
	char *str;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			printed_chars += _putchar(*format);
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = va_arg(args, int);
					printed_chars += _putchar(c);
					break;
				case 's':
					str = va_arg(args, char*);
					while (*str)
					{
						printed_chars += _putchar(*str);
						str++;
					}
					break;
				case '%':
					printed_chars += _putchar('%');
					break;
				default:
					break;
			}
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}
