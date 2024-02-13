#include "list.h"

t_list *creat_node(t_list* lst,t_list *(*f)(t_list *elem))
{
  t_list *node=(t_list*)malloc(sizeof(t_list));

  if (!node)  return NULL;

  t_list *result = f(lst);
  
  if (!result) return NULL;
 
  node->content = result->content;
  node->content_size = result->content_size;
  node->next = NULL;
  return node;
}
t_list * ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
  
 
  t_list *new_lst=NULL;
  t_list *tmp1=new_lst;
    t_list *tmp2=lst;

  while (tmp2)
  {
      t_list *node=creat_node(tmp2,f);
       if (!node)
        {
            
            while (new_lst)
            {
                tmp1 = new_lst->next;
                free(new_lst);
                new_lst = tmp1;
            }
            return NULL;
        }
   
      if (new_lst==NULL)
      {
         new_lst=node;
         new_lst->next=NULL;
      }
      else
      {
         while (tmp1->next) tmp1=tmp1->next;
         tmp1->next=node;
      }
      
      
      tmp2=tmp2->next;
      
  }
 return new_lst;
}
