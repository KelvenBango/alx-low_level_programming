#include "main.h"

/**
 * binary_to_uint - converts a binary number into an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * 	   there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = strlength(b);
	unsigned int k = 1;
	unsigned converted_num = 0;
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		if (b == NULL)
			return (0);
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			converted_num += k;
		k *= 2;
	}
	return (converted_num);
}

/**
 * strlength - finds the length of a string
 * @b: string to find the length of
 *
 * Return: length of string
 */
unsigned int strlength(const char *b)
{
	unsigned int i = 0;

	while (b[i] != '\0')
	{
		i++;
	}

	return (i);

}
