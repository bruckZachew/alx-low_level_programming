#include <stdlib.h>
#include <stdio.h>
/**
 *
 * fizz_buzz - print 'fizz' multiple of 3
 *             print 'fuzz' multiple of 5
 *             print 'fizzbuzz multiple of 15
 *
 *
 * Return : No it is void.
 * 
 */

void fizz_buzz(void)
{
	int n=100;
        char *fb="FizzBuzz";
	char *f="Fizz";
	char *b="Buzz";

	for(int i=1; i <= n; i++)
		(i%15==0)?printf("%s ",fb):(i%3==0)?printf("%s ",f):(i%5==0)?printf("%s ",b):printf("%d ",i);
		
	puts("\n");
	
		
		
}
