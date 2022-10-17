#include <stdio.h>
/**
 * main -Entry point 
 *
 *
 * small letter alphabet in reverse 
 *
 *return: Always 0 (Sucess)
 */
int main(void)
{
	char _letter='z';
	while( _letter >='a' )
		putchar(_letter--);
	putchar('\n');
 return (0);
}
