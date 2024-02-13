#include <stdlib.h>

size_t ft_strlen(const char *s)
{
  size_t n=0;
  
   while (s[n]) n++;

  return n;
   
}
char * ft_strjoin(char const *s1, char const *s2)
{
size_t    len1=ft_strlen(s1),len2=ft_strlen(s2), i=0,j=0;;
size_t    len=len1+len2;
char *res=(char*)malloc(len+1);

 if (!res)
 {
   return NULL;
 }else
 {
   while (j<len1)
   {
     res[i]=s1[j];
     i++;
     j++;
   }
   j=0;
   while (j<len2)
   {
     res[i]=s2[j];
     i++;
     j++;
   }
   res[i]='\0';
   return res;
 }
 }
