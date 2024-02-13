char *ft_strncat(char *dest, const char *src, size_t n)
{
  int     i=0;
  size_t  k=0;

  while (dest[i])  i++;

  while (src[k]&& k< n)
  {
    dest[i]=src[k];
    i++;
    k++;
  }
  dest[i]='\0';
  return dest;

}
