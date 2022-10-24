
/**
 *
 * _strcpy - copies a string.
 *
 *
 * Return: On success- pointer to the copied string.
 * otherwise null
 * 
 */

char* _strcpy(char *dest, char *src)
{
	int i=0;
	for(;src[i]!='\0';i++)
		dest[i]=src[i];
	dest[i]='\0';
	return dest;
}

