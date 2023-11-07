/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupiment <gupiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:04:24 by gupiment          #+#    #+#             */
/*   Updated: 2023/10/15 20:04:24 by gupiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*source;
	char	*destiny;
	size_t	index;

	source = (char *)src;
	destiny = (char *)dest;
	index = 0;
	if (source > destiny)
	{
		while (index < len)
		{
			destiny[index] = source[index];
			index++;
		}
	}
	else
	{
		while (index != len)
		{
			destiny[len - index - 1] = source[len - index - 1];
			index++;
		}
	}
	return (dest);
}
