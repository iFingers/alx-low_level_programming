#include <stdio.h>
/**
 *main - intro
 *
 *retutns zero as success
 */
int main(void)
{
int numb;
for (numb = 0; numb < 10; numb++)
{
putchar ((numb % 10) + '0');
}
putchar('\n');
return (0);
}
