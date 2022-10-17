#include <stdio.h>
/**
 * main -Entry point 
 *
 *
 * return: small letter alphabet
 *
 */
int main(void)
{
	char _letter='a';
	while( _letter<='z' )
		putchar(_letter++);
	putchar('\n');
 return (0);
}
