#include <unistd.h>
void ft_putstr(char const *s)
{
   int i=0;
   while (s[i])
   {
      write(1,&s[i],1);
      i++;
   }
   
}
void ft_putchar(char c)
{
   write(1,&c,1);
}


void ft_putendl(char const *s)
{
   ft_putstr(s);
   ft_putchar('\n');
}
