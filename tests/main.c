#include <stdio.h>
#include "../main.h"

int main(void)
{
    int printed_chars;

  
    printf("Testing %%c:\n");
    printed_chars = _printf("Character: %c\n", 'H');
    printf("Characters printed: %d\n", printed_chars);
    printed_chars = _printf("Null character: %c\n", '\0');
    printf("Characters printed: %d\n", printed_chars);


    printf("\nTesting %%s:\n");
    printed_chars = _printf("String: %s\n", "Hello, world!");
    printf("Characters printed: %d\n", printed_chars);
    printed_chars = _printf("NULL string: %s\n", NULL);
    printf("Characters printed: %d\n", printed_chars);

   
    printf("\nTesting %%%%:\n");
    printed_chars = _printf("Percentage: %%\n");
    printf("Characters printed: %d\n", printed_chars);

    return (0);
}

