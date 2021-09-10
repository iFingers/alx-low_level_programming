#include "main.h"
#include <stdio.h>
#include "main.h"
/**
 *cap_string - For Capitalizing words
 *@str: String to be converted
 *
 *Return: WOrds in capital letters
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			continue;
		}
		if (str[i] == 32 || str[i] == 46 || str[i] == 9 || str[i] == 10)
		{
			++i;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}
		}
		else
		{

			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
	}

	return (str);
}
