#include "main.h"
/**
 * rev_string - For reversing a string
 *@s: string variable to be reversed
 *
 *no return since its void
 */

void rev_string(char *s)
{
	char rev[500];
	int i = 0, j, pos = 0;

	while (*(s + i) != '\0')
	{
	rev[i] = *(s + i);
	i++;
	}
	for (j = (i - 1); j >= 0; j--)
	{
		*(s + pos) = rev[j];
	pos++;
	}
}
