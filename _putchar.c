#include <unistd.h>

/**
 * _putchar - writes
 * @c: Character
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
