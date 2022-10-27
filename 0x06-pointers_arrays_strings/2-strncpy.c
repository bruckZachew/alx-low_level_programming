/**
 *
 * _strncpy - copies a string.
 *
 *
 * Return :  copied string.
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i,j;
   	for(i=0,j=0;j<n && src[j]!='\0';j++,i++)
		dest[i]=src[j];	        
	return dest;
}
