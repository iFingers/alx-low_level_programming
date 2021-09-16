#include "main.h"
#include <stdio.h>
/**
 *_puts_recursion - For recursion print
 *@s: string to be printed
 *
 *no return since its void
 */

void _puts_recursion(char *s)
{
 while(*s)
    {
        if(putchar(*s++) == EOF)
            return EOF;
    }

    if(putchar('\n') == EOF)
        return EOF;
}
