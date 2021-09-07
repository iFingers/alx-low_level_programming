#include <stdio.h>
#include "main.h"
/**
 * print_array - For printing an array
 *@a: First integer
 *@n: Second integer
 *
 *no return since its void
 */

void print_array(int *a, int n)
{
	int j;
	for (j = 0; j <= (n - 1); j++)
	{
		if (j != n - 1)
			printf("%d, ", a[j]);
		else
			printf("%d", a[j]);
	}
	printf("\n");
}

