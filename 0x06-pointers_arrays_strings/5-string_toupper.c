#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *string_toupper - For changing strings to upper case
 *@str: pointer of string parameter to be changed
 *
 *Return: string in upper case
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
{
	if (*(str + i) >= 97 && *(str + i) <= 122)
	{
		*(str + i) = *(str + i) - 32;
	}
	i++;
}

return (str);
}
