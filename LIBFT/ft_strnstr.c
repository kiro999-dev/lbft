size_t ft_strlen(const char *s)
{
  size_t n=0;
  if (s[n]) 
   while (s[n]) n++;
  
  else return 0;
  

  return n;
   
}


char *ft_strnstr(const char *big,	const char *little, size_t len)
{
  size_t   len_s=ft_strlen(big);
  size_t   len_n=ft_strlen(little);
  int count=0;
  const char *ptr_s=big;
  const char *ptr_n=little;
  char  *ptr_p=(char*) big;

  if (len_n>len_s || len_n ==0)
  {
    return 0;
  }
  
  while (*ptr_s&&len>=len_n )
  {
    ptr_n=little;
    while (*ptr_n)
    {
      if (*ptr_n==*ptr_s)
      {
       ptr_n++;
       ptr_s++;
       
      }
      else break;
      
    }
    if (*ptr_n=='\0')
    {
      ptr_p=ptr_p+count;
      return ptr_p;
    }
    count++;
    ptr_s++;   
    len--;

  }
 return NULL;

  
}
