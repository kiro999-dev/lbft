#include <stdlib.h>

size_t ft_strlen(const char *s)
{
  size_t n=0;
  
   while (s[n]) n++;
  

  return n;
   
}
void *ft_memset(void *s, int c, size_t n) {
    size_t i = 0;
    unsigned char *ptr = (unsigned char*) s;
    while (i < n) {
        *ptr = c;
        i++;
        ptr++;
    }
    return s;
}


void ft_strclr(char *s)
{
  if (s)
  {
    int len=ft_strlen(s);
    ft_memset((char*)s,'\0',len);
  }
  else return;
}
