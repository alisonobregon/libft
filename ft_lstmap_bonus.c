#include "libft.h"
/*lst: un puntero a un nodo.
f: la dirección de un puntero a una función usada
en la iteración de cada elemento de la lista.
del: un puntero a función utilizado para eliminar
el contenido de un nodo, si es necesario.
*/
/*Itera la lista ’lst’ y aplica la función ’f’ al
contenido de cada nodo. Crea una lista resultante
de la aplicación correcta y sucesiva de la función
’f’ sobre cada nodo. La función ’del’ se utiliza
para eliminar el contenido de un nodo, si hace
falta.*/
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
    t_list  *awk;
    t_list  *pwk;
    t_list  *new;

    if (!(awk = lst))
        return(NULL);
    new = (t_list)malloc(sizeof(t_list*));
    if (!new)
       return(NULL);
    while (awk)
    {
        pwk = awk ->next;
        new->content= f(awk ->content);
        del(awk -> content);
        //new->next =
        awk = pwk; 

    }
    return(new);
    
}
