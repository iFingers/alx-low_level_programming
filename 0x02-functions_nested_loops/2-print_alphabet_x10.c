#include "main.h"
/**
 * print_alphabet - For printing the alphabet
 *
 *no return since its void
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

}
