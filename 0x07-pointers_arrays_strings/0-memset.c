/**
 *
 * _memset - fills memory with const byte.
 * @s: the address of the memory to fill.
 * @b: constant byte.
 * @n: the size of memory to fill.
 *
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i=0;
       	for(;i<n;i++)
       		s[i]=b;
	return s;

}



