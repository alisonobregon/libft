/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliobreg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:38:41 by aliobreg          #+#    #+#             */
/*   Updated: 2024/10/22 21:42:41 by aliobreg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*awk;
	t_list	*pwk;
	t_list	*new;

	if (!(awk == lst))
		return (NULL);
	new = (t_list)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	while (awk)
	{
		pwk = awk ->next;
		new->content = f(awk ->content);
		del(awk -> content);
		awk = pwk;
	}
	return (new);
}
