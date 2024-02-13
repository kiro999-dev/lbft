int cheak_atoi(const char *nptr,int *ptr_i)
{
  int i=0,signe=1;
while ((nptr[i]>=9 && nptr[i]<=13 )|| nptr[i]==' ') i++;
 
  while (nptr[i]=='-' || nptr[i]=='+')
  {
    if (nptr[i]=='-') signe*=-1;
    i++;
    
  }
  *ptr_i=i;
  return signe;

}

int ft_atoi(const char *nptr)
{
 
  int   number=0,i=0;
  int   cheak=cheak_atoi(nptr,&i);

  while (nptr[i]>='0' && nptr[i] <='9')
  {
    number=(nptr[i]-48)+number*10;
    i++;
  }
  if (!cheak)
  {
    number*=-1;
  }
  
  return number;
}
