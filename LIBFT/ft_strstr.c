size_t ft_strlen(const char *s)
{
  size_t n=0;
  if (s[n]) 
   while (s[n]) n++;
  
  else return 0;
  

  return n;
   
}


char *ft_strstr(const char *haystack, const char *needle)
{
  size_t   len_s=ft_strlen(haystack);
  size_t   len_n=ft_strlen(needle);
  int count=0;
  const char *ptr_s=haystack;
  const char *ptr_n=needle;
  char  *ptr_p=(char*) haystack;

  if (len_n>len_s || len_n ==0)
  {
    return 0;
  }
  
  while (*ptr_s)
  {
    ptr_n=needle;
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

  }
 return NULL;

  
}

