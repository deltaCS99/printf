#include "main.h"

/**
 * count_digits - count
 * @num: number
 *
 * Return: No.
 */
int count_digits(int num)
{
	int count = 0;

	if (num == 0)
		return (1);

	while (num != 0)
	{
		num /= 10;
		count++;
	}

	return (count);
}

/**
 * print_number - print no
 * @num: number
 * @digits: digits
 *
 * Return: No.
 */
int print_number(int num, int digits)
{
	int printed_chars = 0;
	char buffer[BUFF_SIZE];
	int i;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		printed_chars++;
		num = -num;
	}

	for (i = digits - 1; i >= 0; i--)
	{
		buffer[i] = (num % 10) + '0';
		num /= 10;
	}
	for (i = 0; i < digits; i++)
	{
		_putchar(buffer[i]);
		printed_chars++;
	}

	return (printed_chars);
}
/**
 * handle_int - Handle int
 * @args: list
 *
 * Return: No.
 */
int handle_int(va_list args)
{
	int num = va_arg(args, int);
	int digits = count_digits(num);
	int printed_chars = 0;

	if (num == INT_MIN)
	{
		printed_chars += _printf("-2147483648");
	}
	else
	{
		printed_chars += print_number(num, digits);
	}

	return (printed_chars);
}
