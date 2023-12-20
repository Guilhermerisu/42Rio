/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupiment <gupiment@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:36:09 by gupiment          #+#    #+#             */
/*   Updated: 2023/10/30 21:36:10 by gupiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_listsize(t_list *lst)
{
	t_list	*last_check;
	int		i;

	last_check = lst;
	i = 0;
	while (last_check)
	{
		last_check = last_check->next;
		i++;
	}
	return (i);
}
