#include <main.h>

/**
 * print_rev -entry point
 * Description : function that prints a string, in reverse, followed by a new line.
 * Returns : void
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
