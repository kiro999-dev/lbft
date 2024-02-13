#include <stdlib.h>


int nbr_words(char const *s,char c)
{
   int count=0,i=0;

   while (s[i])
   {
      while (s[i]==c && s[i])  i++;    

      if (s[i]) count++;

      while (s[i]!=c && s[i])  i++;      
   }
   return count;
   
}
int len_word(char const *s,char c,int i)
{
   int count=0;
while (s[i]!=c&& s[i])
{
   i++;
   count++;
}
return count;
   
}
char ** ft_strsplit(char const *s, char c)
{
   int nbr=nbr_words(s,c),len=0,i=0,j,k=0;
   char **res=malloc((nbr+1)*sizeof(char*));
   char *word;

   while (s[i])
   {
      while (s[i]==c&&s[i])  i++;

      len=len_word(s,c,i);

      word=(char*)malloc(len+1);
      j=0;
      while (s[i]!=c&& s[i])  word[j++]=s[i++];
      
      word[j]='\0';
      res[k++]=word;
      
   }
   word=NULL;
   res[--k]=NULL;

return res;
}
