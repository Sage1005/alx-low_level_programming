#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * REturn: Always 0 (success)
 */
void positive_or_negative(int i)
{
	srand(time(0));

	i = rand() - RAND_MAX / 2;

	/* your code goes there */

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else 
		printf("%d is negative\n", i);
}
