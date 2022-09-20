#include <main.h>

/**
 * print_array - main entry
 * Description : function that prints n elements of an array of integers, followed by a new line.
 * Return : void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
        {
                printf("%d, ", *(a + i));
        }

}