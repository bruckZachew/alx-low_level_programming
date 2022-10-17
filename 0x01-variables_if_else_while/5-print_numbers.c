#include <stdio.h>
/**
 *
 * main - Entry point
 *
 *
 * display numbers
  when i write it on return part just to show 
  if success means it done it's job..
  it does not mean it returns somthing ok ...
 *
 * return: Success (0)
 * */
int main(void)
{
	short _num= 0 ;
	while(_num < 10)
	       putchar('0'+_num++);
        putchar('\n');	
	return (0);
}
