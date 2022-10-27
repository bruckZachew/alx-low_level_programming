/**
 *
 * _strncat -  concats src string to dest with given length.
 *
 *
 * Return :  des-string.
 */


char *_strncat(char *dest, char *src, int n)
{
	int i,j;
	for(i=0;dest[i]!='\0';i++);
	for(j=0;j<n && src[j]!='\0';j++,i++)				 
		dest[i]=src[j];
 	return dest;
}


