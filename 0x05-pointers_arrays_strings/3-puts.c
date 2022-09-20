#include "main.h"
/**
 * _puts - prints a string in stdout
 * @str: string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int len = 0, i;

        while (*(s + len))
                len++;

	for (i = 0; i < len ; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
