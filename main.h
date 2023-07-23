#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

#define BUFF_SIZE 1024

/**
 * struct format_handler - handler type
 * @specifier: specifier
 * @handler: handler
 */
struct format_handler
{
	char specifier;
	int (*handler)(va_list args);
};

typedef struct format_handler conversion_handler_t;

int _putchar(char c);

int handle_char(va_list args);
int handle_string(va_list args);
int handle_percent(va_list args);

int handle_int(va_list args);

int _printf(const char *format, ...);

#endif
