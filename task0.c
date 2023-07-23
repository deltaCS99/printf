#include "main.h"

/**
 * handle_char - handle char
 * @args: arg
 *
 * Return: No.
 */
int handle_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * handle_string - handle str
 * @args: arg
 *
 * Return: No.
 */
int handle_string(va_list args)
{
	char *str = va_arg(args, char*);
	int printed_chars = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		printed_chars += _putchar(*str);
		str++;
	}

	return (printed_chars);
}

/**
 * handle_percent - Handle %
 * @args: arg
 *
 * Return: 1
 */
int handle_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
