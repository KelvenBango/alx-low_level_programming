#include <main.h>

/**
 * rev_string - entry point
 * Description : function that reverses a string.
 * Return : void
 */

void rev_string(char *s)
{
	int len = strlen(s);
        int i;

        for (i = len-1; i >= 0 ; i--)
        {
                printf("%c", *(s + i));
        }
}
