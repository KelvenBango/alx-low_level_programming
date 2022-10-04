#include "main.h"
/**
*_strcmp - a func that compares two strings
*@s1: first string
*@s2: second string
*Return: the difference between s1 and s2
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;


	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;

	return ((s1[i]) - (s2[i]));
}
