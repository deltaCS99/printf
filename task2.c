#include "main.h"

/**
 * print_binary - Print
 * @num: num
 *
 * Return: Num
 */
int print_binary(unsigned int num)
{
	int printed_chars = 0;
	char buffer[BUFF_SIZE];
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		buffer[i++] = (num & 1) + '0';
		num >>= 1;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
		printed_chars++;
	}

	return (printed_chars);
}
