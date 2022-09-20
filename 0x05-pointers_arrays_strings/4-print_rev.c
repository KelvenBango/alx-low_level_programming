#include <main.h>

/**
 * print_rev -entry point
 * Description : function that prints a string, in reverse, followed by a new line.
 * Returns : void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
