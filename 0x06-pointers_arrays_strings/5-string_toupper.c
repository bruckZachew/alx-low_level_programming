/**
 *
 * string_toupper - changes char of a string to upper.
 *
 *
 * Return : On success - capitalized string.
 */


char *string_toupper(char *str)
{
	    char s='a';
	    char u='A';
	    int val=0;
	    int i;
	    for(i=0;str[i]!='\0';i++)
	    {
		    val=str[i]-s;
		    if(val < 0)continue;
		    str[i]=val+u;
	    }
	    str[i]='\0';
	    return str;
}
