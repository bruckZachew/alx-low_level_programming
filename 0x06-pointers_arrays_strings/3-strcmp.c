/**
 *
 * _strcmp - comparing a string.
 *
 *
 * Return : On success - char difference.
 */


int _strcmp(char *dest, char *src)
{
       	int i; 
   	for (i=0; dest[i]!='\0';i++)
	 	if(dest[i]<src[i] || dest[i]>src[i])return dest[i]- src[i];	        
       	return dest[i]-src[i];
		        
		        
}
