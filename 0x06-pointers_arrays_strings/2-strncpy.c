#include "main.h"
/**
* _strncpy - Copies a string pointed to by @src, including the
* terminating null byte, to a buffer pointed to by @dest.
* @dest: A buffer to copy the string to.
*
* @src: The source string to copy.
*
*@n: Integer
*
* Return: A pointer to the destination string @dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
for ( ; i < n; i++)
{
	dest[i] = '\0';
}

return (dest);
}

