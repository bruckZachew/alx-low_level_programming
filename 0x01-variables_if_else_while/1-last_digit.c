#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n,i,tmp;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	tmp=n;
	while(tmp!=0)
	{
        i=tmp%10; 		
	tmp=i/10;
	}
	if(i<0)i*=-1;
	if(i>5)
		printf("Last digit of %d is %d and is greater than 5\n",n,i);
	else if(i>0 && i<5)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",n,i);
	else if(i==0)
		printf("Last digit of %d is %d \n",n,i);
	return (0);
}
