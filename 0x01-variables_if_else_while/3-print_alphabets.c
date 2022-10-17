#include <stdio.h>
/**
 * main - Entry point
 *
 *
 *
 *return: small and capetal letter
 *
 */
int main(void)
{
	char _letter='a';

	while(_letter <= 'z')
		putchar(_letter++);
	
	_letter='A';
	while(_letter <= 'Z')
		putchar(_letter++);

	putchar('\n');

	return (0);
}
