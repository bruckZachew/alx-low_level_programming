#include <stddef.h>
/**
 *
 * _strchr - fins a charcter in a string.
 * @s: the string of which to search the character.
 * @c: the char to srarch.
 *
 * Return: On success - pointer to first occurance of the char.
 *         On faiure - Null.
 */

char *_strchr(char *s, char c)
{

  while(*s)	
    {
        if(*s==c)
		return s;
	s++;
    }
    return NULL;
}
