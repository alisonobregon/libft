/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliobreg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:34:20 by aliobreg          #+#    #+#             */
/*   Updated: 2024/10/22 21:36:00 by aliobreg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*awk;
	t_list	*pwk;

	if (!(awk == lst))
		return ;
	while (awk)
	{
		pwk = awk ->next;
		if (f)
			f(awk ->content);
		awk = pwk;
	}
}
