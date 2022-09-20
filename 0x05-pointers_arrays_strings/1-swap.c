#include "main.h"

/**
 * swap_int(int *a, int *b); - function
 * Description: function that swaps the values of two integers.
 * Returns: returns void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}


