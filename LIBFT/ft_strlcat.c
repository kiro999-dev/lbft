size_t ft_strlen(const char *s)
{
  size_t n=0;
  if (s[n]) 
   while (s[n]) n++;
  
  else return 0;
  

  return n;
   
}

int ft_strlcat(char *dst, const char *src, size_t size)
{
size_t    len_dst=ft_strlen(dst);
size_t    len_src=ft_strlen(src);
size_t    total=len_dst+len_src;
size_t    i=len_dst,k=0;

while (src[k]&& k < size -len_dst -1)
{
 dst[i]= src[k];
 i++;
 k++;
}

while (i<size)
{
  dst[i]='\0';
  i++;
}

return total;

}

