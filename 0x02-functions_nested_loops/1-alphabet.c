#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: Prints the alphabet, in lowercase, followed by new line 
 *
 * Return: void
 */

void print_alphabet(){

	char c = 'a';

	while (c <= 'z'){

		_putchar(c);
		c++;
	}
	_putchar('\n');

}
