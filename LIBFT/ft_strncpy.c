 char *ft_strncpy(char *dest, const char *src, size_t n)
{
  size_t i=0;

  while (src[i] && i < n)
  {
   dest[i]=src[i];
    i++;
  }
   while (src[i] && i < n)
  {
   dest[i]='\0';
    i++;
  }
  
  return dest;
}

