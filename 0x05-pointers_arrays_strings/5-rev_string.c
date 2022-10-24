/**
 *
 * rev_string - reversing a string.
 *
 *
 * 
 */

void rev_string(char *s)
{
	char cp[80];
	int i,j,k;
	for(i=0;s[i]!='\0';i++);
	for(j=0,k=i-1;k>=0;j++,k--)
		cp[j]=s[k];
	cp[j]='\0';
	for(i=0;cp[i]!='\0';i++)
		s[i]=cp[i];

}
		
	
   	
	
