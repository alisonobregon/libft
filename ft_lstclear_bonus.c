/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliobreg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:29:44 by aliobreg          #+#    #+#             */
/*   Updated: 2024/10/22 21:32:01 by aliobreg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*pwk;

	if (!del || !lst || *lst)
		return ;
	while (lst && *lst)
	{
		pwk = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = pwk;
	}
}
