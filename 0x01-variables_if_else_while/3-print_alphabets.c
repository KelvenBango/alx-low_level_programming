#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	char alph = 'a';

	while(alph <= 'z'){

		putchar(alph);
		alph ++;
	}
	alph = 'A';

	while(alph <= 'A'){

		putchar(alph);
		alph++
	}
	putchar('\n');
	return(0);
}
