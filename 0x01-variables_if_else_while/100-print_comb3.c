#include <stdio.h>
/**
 *
 * main - Entry point
 *
 *
 * display possible combo of two different number
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

	while(i<9)
	{
		j=i+1;
		while(j<=9)
		{
			putchar('0' + i);
			putchar('0' + j++);
			if(j +1 > 9 && i==8)
				break;
			putchar(',');	
			putchar(' ');
		
		}
		i++;
	}
        putchar('\n');	
	return (0);
}
