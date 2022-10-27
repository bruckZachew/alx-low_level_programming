/**
 * fun declaration for swap
 */
void swap(int*,int,int);

/**
 *
 * reverse_array - reverse element's of un array.
 *
 *
 * Return : no return value.
 */


void reverse_array(int *a, int n)
{
   int i,j;
   for(i=0,j=n-1;i!=j;i++,j--)
	   swap(a,i,j);   
		        
}
/**
 * swap - just swaps elements of un array.
 */
void swap(int *a,int i,int j)
{
	int t=a[i];
	a[i]=a[j];
	a[j]=t;
}
