/**
 * _strspn - get the length of the prefix substring.
 * @s: the string of which to search the prefix.
 * @accept: the prefix to srarch.
 *
 * Return: On success - length of the prefix.
 *         otherwise - 0.
 */

unsigned int _strspn(char *s, char *accept)
{
    int count=0;
    int h_tab[80];
    int i;
    int j;

    for(i=0;accept[i]!='\0';i++)
	    h_tab[count++]=0;
    
    h_tab[count]=-1;
    for(i=0;s[i]!='\0';i++)
    {
        for(j=0;accept[j]!='\0';j++)
        {
            if(s[i]==accept[j])
            h_tab[j]=1;
        }
    }
    i=0;
    count=0;
    while(h_tab[i]!=-1)
    {
        if(h_tab[i++]==1)
		count++;
    }
     /*because of end line char add 1*/
    if(count>0)
	    count++;
    
    return count;
}
