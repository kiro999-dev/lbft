#include <unistd.h>
 

void ft_putchar_fd(char c, int fd)
{
    write(fd,&c,1);
}
void ft_putstr_fd(char const *s, int fd)
{   int i=0;
   while (s[i])
   {
      write(fd,&s[i],1);
      i++;
   }
 }
 void ft_putendl_fd(char const *s, int fd)
 {
   ft_putstr_fd(s,fd);
   ft_putchar_fd('\n',fd);
}
