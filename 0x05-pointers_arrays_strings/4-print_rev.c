#include "main.h"
/**
 *print_rev - For printing the reverse of a character
 *@s: Character to be reversed
 *
 *no return since its void
 */

void print_rev(char *s)
{
	int b = 0, c = 0;

	while (*(s + b) != '\0')
	{
		b++;
	}
	for (c = (b - 1); c >= 0; c--)
	{
		_putchar(*(s + c));
	}
	_putchar('\n');
}
