/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliobreg <aliobreg@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:14:26 by aliobreg          #+#    #+#             */
/*   Updated: 2024/06/19 19:14:26 by aliobreg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
t_list *ft_lstnew(void *content)
{
   t_list* newnode;

   newnode = (t_list*)malloc(sizeof(t_list));
   if(!newnode)
        return (NULL);
   newnode->content = (void *)content;
    newnode->next = NULL;
    return (newnode);
}

