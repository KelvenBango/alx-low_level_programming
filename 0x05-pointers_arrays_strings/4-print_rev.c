#include "main.h"
/**
*rev_string - a func that reverses a string
*@s: pointer to string
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
