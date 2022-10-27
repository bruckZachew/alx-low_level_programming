#include"main.h"
/**
 *
 * print_number- prints un integer.
 *
 *
 * Return : no return value.
 */


void print_number(int n)
{
    int a;
    int sign=1;
    static int is_not_zero=0;
    if(n!=0)
    {
        is_not_zero=1;
        if(n<0)
        {
            sign=-1;
            n*=-1;
        }
        a=n%10;
     if(sign==-1)
            _putchar('-');
      print_number(n/10);
        _putchar(a +'0');
    }
    else
    { 
        if(is_not_zero!=1)
           _putchar(0+'0');
    }
}
