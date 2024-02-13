 void *ft_memchr(const void *s, int c, size_t n)
 {
  size_t i=0;
  unsigned char*  ptr_src=(unsigned char*)s;
  while (i<n)
  {
    if (*ptr_src==(unsigned char) c)
    {
      return  ptr_src;
    }
    
    i++;
    ptr_src++;
  }
  return 0;
 }
