/**
 *
 * print_square - print '#' n by n.
 *
 *
 * Return : No it is void.
 * 
 */

void print_square(int n)
{
	int i;
	
	for(i=n; i > 0; i--)
	{
		for(int j=0; j<n; j++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
		
		
}
