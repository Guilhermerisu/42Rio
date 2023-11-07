/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupiment <gupiment@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:35:31 by gupiment          #+#    #+#             */
/*   Updated: 2023/10/30 21:35:32 by gupiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*lastnew_el;

	if (lst && f && del)
	{
		new_list = ft_lstnew(f(lst->content));
		lst = lst->next;
		lastnew_el = new_list;
		while (lst && new_list)
		{
			lastnew_el->next = ft_lstnew(f(lst->content));
			if (!lastnew_el->next)
				ft_lstclear(&new_list, del);
			else
			{
				lastnew_el = lastnew_el->next;
				lst = lst->next;
			}
		}
		return (new_list);
	}
	return (0);
}
