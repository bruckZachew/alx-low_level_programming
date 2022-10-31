#include <stddef.h>
/**
 * _strpbrk - searches a string for any of aset of bytes.
 * @s: the string of which to search from.
 * @accept: the set of any bytes to srarch.
 *
 * Return: On success - a string from the first occurance.
 *         On failure - Null.
 */

char *_strpbrk(char *s, char *accept)
{
    int j;
 
    while(*s)
    {
        for(j=0;accept[j]!='\0';j++)
        {
            if(*s==accept[j])
		    return s;
        }
        s++;
    }
    
    return NULL;
}
