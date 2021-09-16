#include "main.h"
/**
 * _strchr - For printing the alphabet
 *@s: Pointer to character
 *@c: Character
 *
 *Return: Character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
        if (*s == (char) c)
        {
            return (char *) s;
        }
        s++;
    }

return NULL;
}
