#include "main.h"

/**
 * main - intro to the main program
 *
 * Return: On success 0.
 */

void print_alphabet(void)
{
	char c;
	for(c = 'a'; c <= 'z'; c++) {
		_putchar(c);
	}
	_putchar('\n');
}
