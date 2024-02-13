#include "list.h"

void ft_lstdel(t_list **alst, void (*del)(void *,size_t))
{
   if (*alst&&alst)
   {
      t_list *tmp=*alst;
      while (tmp->next)
      {
          (*del)(tmp->content,tmp->content_size); 
          free(tmp);
          tmp=tmp->next;
         
      }
      *alst=NULL;
   }
   
}
