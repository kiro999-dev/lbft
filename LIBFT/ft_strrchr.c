size_t ft_strlen(const char *s)
{
  size_t n=0;
  if (s[n]) 
   while (s[n]) n++;
  
  else return 0;
  

  return n;
   
}

char *ft_strrchr(const char *s, int c)
{

char    *ptr_s=(char*)s;
size_t  len=ft_strlen(s)-1;
ptr_s=  ptr_s+len;
size_t  i=0;

while (i<len ) 
{
  if (*ptr_s==c) break;
  ptr_s--;
  i++;
}

if (*ptr_s!=c) return NULL;

return ptr_s;


}
