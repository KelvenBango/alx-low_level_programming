#include "main.h"

/**
 * main -entry point
 *
 * Description: Program that prints _putchar followed by a new line
 *
 * Return: always 0
 */

int main(void)
{

	int i=0;
	char c;
	char s[] = "_putchar\n";

	while (i<10)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);

}
