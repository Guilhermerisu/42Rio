/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupiment <gupiment@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:30:50 by gupiment          #+#    #+#             */
/*   Updated: 2023/10/30 21:30:53 by gupiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_el;

	if (lst && *lst)
	{
		last_el = *lst;
		while (last_el->next)
			last_el = last_el->next;
		last_el->next = new;
	}
	else
		if (lst)
			*lst = new;
}
