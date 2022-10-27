/**
 *
 * cap_string - capitalize all words of a string.
 *
 *
 * Return : On success - capitalized string.
 */

char *cap_string(char *str)
{
    char s='a';
    char u='A';
    int val=0;
    int i,j;
    char separators[] ={'\n','\t','.',',',' ','!','?','\"','(',')','{','}'};
    for(i=0;str[i]!='\0';i++)
    {
      for(j=0;j<10;j++)
      {
          if(str[i-1]==separators[j])
          {
               val=str[i]-s;
                if(val < 0)break;
                if(str[i-1]=='\t')
                        str[i-1]=' ';
                str[i]=val+u;
          }
      }
      
    }
    str[i]='\0';
    return str;
}
