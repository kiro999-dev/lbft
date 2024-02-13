char *ft_strcat(char *dest, const char *src)
{
  int i=0;
  while (dest[i])
  {
      i++;
  }
  while (src[i])
  {
    dest[i]=src[i];
    i++;
  }
  dest[i]='\0';
  return dest;

}
