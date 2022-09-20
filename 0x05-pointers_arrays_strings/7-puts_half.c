#include <main.h>

/**
 * puts_half - entry point
 * Description : function that prints half of a string, followed by a new line.
 * Return : void
 */

void puts_half(char *str)
{
	int len = strlen(str);
        int i;

        if (len % 2 == 0){
            i = len / 2;
        }else{
            i = (len - 1)/2;
        }

        while(i < len){
            
           printf("%c", *(str + i));
           i++;  
        }
}
