
/**
 *
 * print_triangle - print triangle using char '#'
 *                           
 *
 *
 * Return : No it is void.
 * 
 */

void print_triangle(int size)
{
        
	int k,j;
	for(int i=0;i < size; i++){
              k=(size-1)-i;
	      j=0;
	      while(k!=size && k-- > i)_putchar(' ');
	      while(j++ <= i)_putchar('#');
	 
	      _putchar('\n');
		
	}
		
		
}
