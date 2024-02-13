int ft_strncmp(const char *s1, const char *s2, size_t n)
 {
  int  i=0,j=0;
  size_t k=0;
  while ((s1[i]  && s2[j] ) && k<n-1)
  {
      if (s1[i]!=s2[j])
      {
        return s1[i]-s2[j];
      }
      i++;
      j++;
      k++;
  }
   return s1[i]-s2[j];

 }
