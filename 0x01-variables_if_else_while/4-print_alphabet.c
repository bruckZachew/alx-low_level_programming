#include <stdio.h>
/**
 *
 *main - Entry point
 *
 *
 *
 *return: small letters except q and e
 *
 *
 */
int main(void)
{
	char _letter='a';
	while(_letter <= 'z')
	{
		if(_letter == 'q' || _letter == 'e')
		{
			_letter++;
		    	continue;
		}
 	 putchar(_letter++);	
	}
	putchar('\n');
	return (0);
}
