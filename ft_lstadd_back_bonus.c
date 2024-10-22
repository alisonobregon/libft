#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temporal;
    if(!*lst)
        lst = new;
    temporal = *lst;
    while (temporal->next)
        temporal = temporal ->next;
    temporal->next = new;
}