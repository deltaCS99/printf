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
			write(1, &(*format), 1);
			printed_chars++;
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = va_arg(args, int);
					write(1, &c, 1);
					printed_chars++;
					break;
				case 's':
					str = va_arg(args, char*);
					while (*str)
					{
						write(1,&(*str), 1);
						str++;
						printed_chars++;
					}
					break;
				case '%':
					write(1, "%", 1);
					printed_chars++;
					break;	
				default:
					write(1, "%", 1);
					write(1, &(*format), 1);
					printed_chars += 2;
					break;
			}
		}
		format++;
	}

	va_end(args);
	return (printed_chars);
}
