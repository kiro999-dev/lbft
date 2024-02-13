#include <stdlib.h>


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

char * ft_strnew(size_t size){
  char *ptr_str=(char*)malloc(size+1);
  if (ptr_str)
  {
    ft_memset((char*)ptr_str,'\0',size+1);
    return ptr_str;
  }
  else return NULL;

  return;
}
