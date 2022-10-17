#include <stdio.h>
/**
 *
 * main - Entry point
 *
 *
 * displa single  possible cobo of a number
   when i write it on return part just to show 
   if success means it done it's job..
   it does not mean it returns somthing ok ...
 *
 * return: Success (0)
 * */
int main(void)
{
	short _num = 0;
        
	while(1)
	{
		putchar('0' + _num++);
		if(_num + 1 > 10)
			break;
		
		putchar(',');
		putchar(' ');
	}
        putchar('\n');	
	return (0);
}
