#include "main.h"
/**
 *_strlen - For printing the string length
 *@s: The string to print length
 *
 *Return: The length of the string
 */

int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;

	return (c);
}
