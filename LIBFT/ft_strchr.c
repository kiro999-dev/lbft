char *ft_strchr(const char *s, int c)
{

 char *ptr_s=(char*)s;
while (*ptr_s && *ptr_s!=c) ptr_s++;

if (*ptr_s!=c)
{
  return NULL;
}
return ptr_s;


}
