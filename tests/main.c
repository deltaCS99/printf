#include <stdio.h>
#include "../main.h"

int main(void)
{
    int len;

    len = _printf("Hello, %s! I am %c. Printing a percent sign: %%\n", "world", 'G');
    printf("Number of characters printed (excluding null byte): %d\n", len);

    return (0);
}

