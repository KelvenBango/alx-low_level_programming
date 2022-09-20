#include <main.h>

/**
 * print_rev -entry point
 * Description : function that prints a string, in reverse, followed by a new line.
 * Returns : void
 */

void print_rev(char *s)
{
	int len = strlen(s);
        int i;

        for (i = len-1; i >= 0 ; i--)
        {
                printf("%c", *(s + i));
        }
}
