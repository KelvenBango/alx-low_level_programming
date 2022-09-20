#include "main.h"

/**
 * _puts - main entry
 * Description : function that prints a string, followed by a new line, to stdout.
 * Return : void
 */

void _puts(char *str)
{
	int len = 0, i;

        while (*(s + len))
                len++;

	for (i = 0; i < len ; i++)
	{
		printf("%c", *(str + i));
	}
}
