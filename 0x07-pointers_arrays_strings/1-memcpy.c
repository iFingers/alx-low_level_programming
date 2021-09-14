#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * _memcpy - For Copying Memory area
 *@dest: Pointer to destination
 *@src: no return since its void
 *@n: number of memory
 *Return: Memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return (dest);
}
