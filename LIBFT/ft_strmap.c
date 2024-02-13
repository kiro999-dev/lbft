#include <stdlib.h>

size_t ft_strlen(const char *s)
{
  size_t n=0;

   while (s[n]) n++;


  return n;

}

char * ft_strmap(char const *s, char (*f)(char))
{
  int   i=0;
  char *res=(char*)malloc(ft_strlen(s)+1);
  if (s)
  {
   while (s[i])
   {
    res[i]=(*f)(s[i]);
    i++;
   }
    res='\0';
  }
  return res;
}
