#include "main.h"
/**
 *puts2 - For printing other characters apart from the first string
 *@str: String to be outputed
 *
 *no return since its void
 */

void puts2(char *str)
{
	int j = 0;

	for (j = 0; *(str + j) != '\0'; j++)
	{
		if (j % 2 == 0)
			_putchar(*(str + j));
	}
	_putchar('\n');
}
