#include <stdio.h>
/**
 *
 *print_array - prints each element of an array.
 *
 *
 * 
 * 
 */

void print_array(int *a, int n)
{
	int i=0;
	char comma=',';
	for(; i<n ; i++)
		printf("%d%c ",a[i],(i!=n-1)?comma:' ');
	puts("\n");
}

