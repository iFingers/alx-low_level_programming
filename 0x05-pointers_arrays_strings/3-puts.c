#include "main.h"
/**
 *_puts(char *str) - Swap Integers with pointers
 *@str: String to be replaced
 *
 *no return since its void
 */

void _puts(char *str)
{
	int c =0;

	while (*(str + c) != '\0')
	{
		_putchar(*(str + c));
		c++;
	}
	_putchar('\n');
}
