
void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
size_t i=0;
unsigned char*  ptr_src=(unsigned char*)src;
unsigned char*  ptr_dest=(unsigned char*) dest;
while (i<n)
{
  if (*ptr_src==(char) c)
  {
    *ptr_dest=*ptr_src;
    ptr_dest++;
    ptr_dest='\0';
    
    return  ptr_dest;
  }
  *ptr_dest=*ptr_src;
  ptr_dest++;
  ptr_src++;
  i++;
  
}
return 0;
}
