#include <stdlib.h>


char * ft_strsub(char const *s, unsigned int start, size_t len)
{
   if (start>=len)
   {
      return NULL;
   }
   size_t lensub=len-start;
   char *res=(char*)malloc(lensub+1);
   
   
   if (!res)
   {
      return NULL;
   }
   
   size_t i=start,j=0;

   while (i<len)
   {
      res[j]=s[i];
      i++;
      j++;
   }
   res[j]='\0';
   

   return res;

}
