#include <stdlib.h>

size_t ft_strlen(const char *s)
{
  size_t n=0;
  
   while (s[n]) n++;
  

  return n;
   
}

char * ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
  int   i=0;
  char *res=(char*)malloc(ft_strlen(s)+1);
  if (s)
  {
   while (s[i])
   {
    res[i]=(*f)(i,s[i]);
    i++;
   }
    res='\0';
  }
  return res;
}
