#include <stdio.h>
/**
 *
 * main - Entry point
 *
 *
 * display possible combo of three different number
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
	short k = 0;
	short delimiter_1=7, delimiter_2=8, delimiter_3=9;

	while(i<=delimiter_1)
	{
		j=i+1;
		while(j<=delimiter_2)
		{
			k=j+1;
			while(k<=delimiter_3)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k++);
				if(k+1>delimiter_3 && i==delimiter_1 && j==delimiter_2)
					break;

				putchar(',');	
				putchar(' ');
			}
			j++;
		}
		i++;
	}
        putchar('\n');	
	return (0);
}
