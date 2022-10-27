/**
 *
 * leet- encodes a string t0 1337.
 *
 *
 * Return : On success - encoded string.
 */

char *leet(char *s)
 {
     int code[]={4,3,0,7,1};
     int j,i;
     char l[]={'a','e','o','t','l'};
     
	for(i=0;s[i]!='\0';i++)
	{
	    for(j=0;j<4;j++)
	    {
	        if(s[i]==l[j] || (s[i]-32)==l[j])
	            s[i]=code[j]+'0';
	    }
	}
	return s;
	
 }
