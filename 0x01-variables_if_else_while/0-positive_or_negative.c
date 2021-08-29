#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - intro to the main of the code
 *Program begins execution here
 *returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n>0)
	{
		printf("positive\n");
	}
	else
	{
		printf("negative\n");
	}
	return (0);
}
