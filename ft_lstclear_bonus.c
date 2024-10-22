#include "libft.h"
/*Elimina y libera el nodo ’lst’ dado y todos los
consecutivos de ese nodo, utilizando la función
’del’ y free(3).
Al final, el puntero a la lista debe ser NULL*/
void ft_lstclear(t_list **lst, void (*del)(void
*))
{
    t_list *awk;
    t_list *pwk;

    if (!(awk =*lst))
        return;
    while(awk)
    {
        pwk = awk->next;
        del(awk->content);
        free(awk);
        awk = pwk;
    }
    *lst = NULL;
}
