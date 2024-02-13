#include <stdlib.h>
void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i=0;
    unsigned char   *tmp= (unsigned char *)malloc(n+1);
    unsigned char   *ptr_src=(unsigned char *)src;
    unsigned char   *ptr_dest=(unsigned char *)dest;

    if (tmp == NULL) {
        return NULL; // Memory allocation failed
    }

    while (i<n) 
    {
       tmp[i]=ptr_src[i];
       i++;         
    }
    tmp[i]=0;

    i=0;

    while (i<n)
    {
         ptr_dest[i]=tmp[i];
         i++;
    }
    ptr_dest[i]='\0';
    free(tmp);
    return dest;
}

void *ft_memcpy(void *dest, const void *src, size_t n) {
  if (src<dest && dest < src+n)
  {
       dest= ft_memmove(dest,src,n);
  }
  else if (src>dest && src < dest+n)
  {
       dest= ft_memmove(dest,src,n);
  }
  else
  {
    size_t          i=0;
    unsigned char   *ptr_src=(unsigned char *)src;
    unsigned char   *ptr_dest=(unsigned char *)dest;
    while (i<n)
    {
        *ptr_dest=*ptr_src;
        i++;
        ptr_dest++;
        ptr_src++;
        

    }
    *ptr_dest='\0';

  }
  
  return dest;
   
        
     
}




