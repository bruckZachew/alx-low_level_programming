/**
 *
 * print_numbers - list 0-9 except 2 and 4.
 *
 *
 * Return : No it is void.
 * 
 */

void print_most_numbers(void)
{
	int i=0;
	int end=10;
	for(; i< end; i++){
		if(i==2 || i==4)continue;
	       _putchar(i+'0');
	}
	_putchar('\n');	
}
