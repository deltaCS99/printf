#include <stdio.h>
#include <string.h>
#include "../main.h"

int main(void)
{
    int printed_chars;
    char long_string[1025];
    int num = 255;

    
    printf("Testing %%c:\n");
    printed_chars = printf("Newline (printf): %c\n", '\n');
    printf("Characters printed (printf): %d\n", printed_chars);
    printed_chars = _printf("Newline (custom): %c\n", '\n');
    printf("Characters printed (custom): %d\n", printed_chars);

    printed_chars = printf("Tab (printf): %c\n", '\t');
    printf("Characters printed (printf): %d\n", printed_chars);
    printed_chars = _printf("Tab (custom): %c\n", '\t');
    printf("Characters printed (custom): %d\n", printed_chars);

    printed_chars = printf("Null Character (printf): %c\n", '\0');
    printf("Characters printed (printf): %d\n", printed_chars);
    printed_chars = _printf("Null Character (custom): %c\n", '\0');
    printf("Characters printed (custom): %d\n", printed_chars);

    printed_chars = printf("Backspace (printf): %c\n", '\b');
    printf("Characters printed (printf): %d\n", printed_chars);
    printed_chars = _printf("Backspace (custom): %c\n", '\b');
    printf("Characters printed (custom): %d\n", printed_chars);

    printed_chars = printf("Carriage Return (printf): %c\n", '\r');
    printf("Characters printed (printf): %d\n", printed_chars);
    printed_chars = _printf("Carriage Return (custom): %c\n", '\r');
    printf("Characters printed (custom): %d\n", printed_chars);

    printed_chars = printf("Escape Character (printf): %c\n", '\\');
    printf("Characters printed (printf): %d\n", printed_chars);
    printed_chars = _printf("Escape Character (custom): %c\n", '\\');
    printf("Characters printed (custom): %d\n", printed_chars);

  
    printf("\nTesting %%s:\n");
    printed_chars = printf("Empty String (printf): %s\n", "");
    printf("Characters printed (printf): %d\n", printed_chars);
    printed_chars = _printf("Empty String (custom): %s\n", "");
    printf("Characters printed (custom): %d\n", printed_chars);

    printed_chars = printf("Non-Printable String (printf): %s\n", "Hello\nWorld");
    printf("Characters printed (printf): %d\n", printed_chars);
    printed_chars = _printf("Non-Printable String (custom): %s\n", "Hello\nWorld");
    printf("Characters printed (custom): %d\n", printed_chars);

    
    memset(long_string, 'A', 1024);
    long_string[1024] = '\0';
    printed_chars = printf("Long String (printf): %s\n", long_string);
    printf("Characters printed (printf): %d\n", printed_chars);
    printed_chars = _printf("Long String (custom): %s\n", long_string);
    printf("Characters printed (custom): %d\n", printed_chars);

    
    printf("\nTesting %%%%:\n");
    printed_chars = printf("Multiple %%%% (printf): %% %% %% %%\n");
    printf("Characters printed (printf): %d\n", printed_chars);
    printed_chars = _printf("Multiple %%%% (custom): %% %% %% %%\n");
    printf("Characters printed (custom): %d\n", printed_chars);


    printf("\nTesting custom conversion specifiers:\n");
   
    printed_chars = printf("Hexadecimal (printf): %x\n", num);
    printf("Characters printed (printf): %d\n", printed_chars);
    printed_chars = _printf("Hexadecimal (custom): %x\n", num);
    printf("Characters printed (custom): %d\n", printed_chars);
    return (0);
}

