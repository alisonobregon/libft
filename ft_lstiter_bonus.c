#include "libft.h"
/*Itera la lista ’lst’ y aplica la función ’f’ en el
contenido de cada nodo*/
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list  *awk;
    t_list  *pwk;

    if(!(awk = lst))
        return;
    while(awk)
    {
        pwk = awk ->next;
        if (f)
            f(awk ->content);
        awk = pwk;
    }

}