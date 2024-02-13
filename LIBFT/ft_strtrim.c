#include <stdlib.h>

size_t ft_strlen(const char *s)
{
  size_t n=0;
  
   while (s[n]) n++;

  return n;
   
}
int ft_len_no_space(char const *s)
{
   int i=0,count=0;
   while (s[i])
   {
      if (s[i]=='\t' && s[i]=='\n'&&s[i]==' ' )
      {
         count++;
      }
      i++;
   }
   return count;

}


char * ft_strtrim(char const *s)
{
int len_s=ft_len_no_space(s),i=0,j=0;
char *res=(char*)malloc(len_s);

while (s[i])
{
    if (s[i]!='\t' && s[i]!='\n'&&s[i]!=' ' )
      {
         res[j]=s[i];
         i++;
         j++;
      }else
      {
          i++;

      }
      
 
}
res[j]='\0';
return res;
}
 
