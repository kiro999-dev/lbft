
int ft_strnequ(char const *s1, char const *s2,size_t n)
{
 size_t i=0;

  while (s1[i]&&s2[i] && i<n)
  {
    if (s1[i]!=s2[i])
    {
      return 0;
    }
    i++;
    
  }
  if ((!s1[i] && !s2[i]) || i==n)
  {
    return 1;
  }
  else
  {
   return 0;
  }
  
 return 1;
 
}
