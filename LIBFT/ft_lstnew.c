#include "list.h"

t_list * ft_lstnew(void const *content, size_t content_size)
{
   t_list *new=(t_list*)malloc(sizeof(t_list));
   if (new)
   {
      new->content_size=content_size;
      new->content=content;
      new->next=0;
   }
   else
   {
      return 0;
   }
   
   return new;

}
