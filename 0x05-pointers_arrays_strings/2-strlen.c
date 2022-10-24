/**
 *
 * _strlen - calculates string length.
 *
 *
 * Return: On success -length of a string.
 * otherwise 0.
 */int _strlen(char *s)
{
	int i=0;
	for(;s[i]!='\0'; i++);
	return i;
}

