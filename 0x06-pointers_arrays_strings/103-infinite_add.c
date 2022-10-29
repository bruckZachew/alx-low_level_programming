
/**
 *
 *infinite_add - add two numbers.
 *
 *
 * Return : On success their sum.
 * otherwise 0.
 */


char *infinite_add(char* n1,char* n2,char* r,int size_r)
{
    char tmp[200];      
    int i=0;
    int j=0;
    int k=0;                                                                       
    int counter=1;                                                                  
    int sum;                                                          
    int _r=0; 
    
       
                                                                                 
    while(*n1)
    {
	    i++;
	    n1++;
    }
    while(*n2)
    {
	    j++;
	    n2++;
    } 
       
    n1--;n2--;i--;j--;
    while(i>=0 && j>=0)                                                                                                  
    {    	
    sum=_r+(*n1 -'0')+(*n2 -'0');                                                                                                                                                                                            
       tmp[k]=sum%10+'0';                                                                                                           
        _r=sum/10;
      	n1--;n2--;
	i--;j--;
	k++;
       counter++;       
    } 
    
    while(i>=0)                                                                                                                  
    {                                                                                                                            
         sum=_r+(*n1-'0');                                                                                                   
          tmp[k++]=sum%10+'0';
          _r=sum/10;                                                                                                             
          counter++;
           n1--;
           i--;	  
    }
   
    while(j>=0)                                                                                                                  
    {    
    
         sum=_r+(*n2-'0');                                                                                                   
          tmp[k++]=sum%10+'0';
          _r=sum/10;                                                                                                             
          counter++;
          n2--;
          j--;	
    }
     if(counter>=size_r)return 0;
     if(k>=0 && _r!=0)
	     tmp[k]=_r+'0';
     
    
     for(i=k,j=0; i>=0;i--,j++)
	     r[j]=tmp[i];

     return r;
} 
