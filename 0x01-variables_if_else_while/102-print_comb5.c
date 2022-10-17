#include <stdio.h>
/**
 *
 * main - Entry point
 *
 *
 * display possible combo of two-two digit number
   when i write it on return part just to show 
   if success means it done it's job..
   it does not mean it returns somthing ok ...
 *
 * return: Success (0)
 * */
int main(void)
{
	short i = 0;
        short j = 0;
	short _eon=99;
        short digit_i=0,digit_j=0;

	while(i<_eon)
	{
		j=i+1;
		digit_i=i/10;
		while(j<=_eon)
		{
			digit_j=j/10;
			putchar('0' + digit_i%10); 
			putchar('0' + i%10);
			putchar(' ');
			putchar('0' + digit_j%10);
			putchar('0' + j%10);
			j++;
			if(j+1 > _eon && i==_eon-1)
				break;	

			putchar(',');	
			putchar(' ');
		
		}
		i++;
	}
        putchar('\n');	
	return (0);
}
