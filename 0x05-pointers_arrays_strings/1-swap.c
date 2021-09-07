#include "main.h"
/**
 *swap_int - For swapping of integers
 *@a: First Integer
 *@b: Second Integer
 *
 *no return since its void
 */

void swap_int(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
