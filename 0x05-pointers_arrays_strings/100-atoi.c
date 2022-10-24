
/**
 *
 * _atoi - converts a string to an integer.
 *
 *
 * Return: On success- the number.
 * otherwise 0.
 * 
 */

int _atoi(char *s)
{
	int i=0;
	int sign=1;
	int mul=1;
	int sum=0;
	int digit=0;
	int val;
	
	for(;s[i]!='\0' && s[i]!=59; i++)
		if(s[i]>=48 && s[i]<=57)
			digit++;
	if(digit==0)return 0;
	for(i=i-1; i>=0; i--)
	{
		if(s[i]==45)sign*=-1;
		if(s[i]>=48 && s[i]<=57)
		{
			val=s[i] - '0';
			sum+=mul * val;
			mul*=10;
		}
	}
	sum*=sign < 0?-1:1;
	return sum;
}

