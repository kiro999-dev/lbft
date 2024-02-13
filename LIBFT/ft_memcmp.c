int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  if (n==0) return 0;

  unsigned char* ptr_s1=(unsigned char*) s1;
  unsigned char* ptr_s2=(unsigned char*) s2;
  size_t            count=0;
  size_t i=0;
  while (i<n)
  {
    if (*ptr_s1==*ptr_s2)  count++;

    else    return *ptr_s1 - *ptr_s2;

    ptr_s1++;
    ptr_s2++;
    i++;
  }
  if (count==n)  return 0;
  

  return *ptr_s1 - *ptr_s2;
}
