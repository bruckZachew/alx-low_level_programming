#include "main.h"
/**
 *
 * puts_half - prints the other half of a string.
 *
 *
 * 
 * 
 */

void puts_half(char *str)
{
	int i=0;

	for(;str[i]!='\0'; i++);

        if(i%2==0) 	
		i=i/2;
	else
		i=(i-1)/2;

	for(;str[i]!='\0';i++)
		_putchar(str[i]);
	_putchar('\n');
}

