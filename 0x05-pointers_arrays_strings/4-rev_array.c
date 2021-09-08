#include "main.h"
/**
 *reverse_array - For reversing an integer array
 *@a: pointer to the array
 *@n: integer 
 *
 *no return since its void
 */

void reverse_array(int *a, int n);
{
    int aux[n];

    for (int i = 0; i < n; i++)
    {
	    aux[n - 1 - i] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = aux[i];
    }
}
