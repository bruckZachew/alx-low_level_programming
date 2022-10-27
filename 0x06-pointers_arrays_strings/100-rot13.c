/**
 *
 * rot13- encodes a string using rottation 13 tech.
 *
 *
 * Return : On success - encoded string.
 */

char* rot13(char *s)
 {
     int _diff=0;
     char tmp;
     int i;
     for(i=0; s[i]!='\0';i++)
     {
         if((s[i]>64 && s[i] <91) || (s[i]>96 && s[i]<123))
         {
         if(s[i]>=97 && s[i]<=122)
            _diff=32;
         tmp=(s[i]-_diff)- 'A';
         s[i]=(tmp+13)%26 + 'A' + _diff;
         _diff=0;
         }
     }
     return s;
     
 }
