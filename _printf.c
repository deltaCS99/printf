#include "main.h"

static const conversion_handler_t handlers[] = {
	{'c', handle_char},
	{'s', handle_string},
	{'%', handle_percent}
};

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
	const conversion_handler_t *handler;
	size_t i;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			handler = NULL;
			for (i = 0; i < sizeof(handlers) / sizeof(handlers[0]); i++)
			{
				if (*format == handlers[i].specifier)
				{
					handler = &handlers[i];
					break;
				}
			}
			if (handler)
			{
				printed_chars += handler->handler(args);
			}
		}
		else
		{
			printed_chars += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}
