#include <stdio.h>
/**
 *
 * main - Entry point
 *
 *
 * display hex decimal number
  when i write it on return part just to show 
  if success means it done it's job..
  it does not mean it returns somthing ok ...
 *
 * return: Success (0)
 * */
int main(void)
{
	short _num = 0;
        short count = 0;
	while(_num < 16)
	{
               if(_num < 10){
		       putchar('0'+ _num++);
	       }else
	       {
		       putchar('a'+ count++);
		       _num++;
	       }
	}
        putchar('\n');	
	return (0);
}
