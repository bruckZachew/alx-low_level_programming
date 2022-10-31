#include <stddef.h>
/**
 * _strstr - searches a sub_string from a string.
 * @haystack: the string of which to search from.
 * @neddle: the sub_string to search.
 *
 * Return: On success - a sub_string from the first occurance.
 *         On failure - Null.
 */


char *_strstr(char *haystack, char *needle)
{
    int flag=0;
    int i;
    
    i=0;
     while(*haystack)
     {
        if(needle[i]==*haystack)
        {
            flag=1;
            break;
        }
        haystack++;
     }
        if(flag)
        {
           for(i=0;needle[i]!='\0';i++)
           {
               if(haystack[i]!=needle[i])
		       return NULL;
           }
        }
       
    
    return haystack;
}
