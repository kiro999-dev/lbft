#include <stdlib.h>

int nbr_len_count(int n,int *cheak_ptr)
{
   
   if (n<0)
   {
      *cheak_ptr=1;
      n=n*-1;
   }
   else *cheak_ptr=0;
   
   int i=0;
   while (n>0)
   {
      n=n/10;
      i++;
   }
   return i;
}
char * ft_itoa(int n)
{
   int cheak=0;
   int len_str=nbr_len_count(n,&cheak)+1;
   char *res;
   if (cheak)
   {
      res=malloc(sizeof(char)*len_str+1);
      res[0]='-';
      n=n*-1;
      res[len_str]='\0';
      int i=len_str-1;
      while (n>0)
      {
         res[i]=(n%10)+48;
         i--;
         n=n/10;
      }
      
   }
   else
   {
      res=malloc(sizeof(char)*len_str);
      res[len_str-1]='\0';
      int i=len_str-2;
      while (n>0)
      {
         res[i]=(n%10)+48;
         i--;
         n=n/10;
      }
      
   }
   return res;
 }

