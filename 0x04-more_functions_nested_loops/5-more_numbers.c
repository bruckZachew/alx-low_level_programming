/**
 *
 * more_numbers - list 0-14 10-times.
 *
 *
 * Return : No it is void.
 * 
 */

void more_numbers(void)
{
	int i;
	int end=15;
	int count=0;
	int tmp;
	while(count<end-5)
	{
		for(i=0; i< end; i++){
			 i/10 > 0?_putchar((i/10)+'0'):-1;
		       	_putchar((i%10)+'0');
	}
		_putchar('\n');
		count++;
	}	
}
