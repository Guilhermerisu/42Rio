/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupiment <gupiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:06:34 by gupiment          #+#    #+#             */
/*   Updated: 2023/10/15 20:06:35 by gupiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	size_t	sup;

	if (ft_strlen(little) == 0)
	{
		return ((char *)big);
	}
	index = 0;
	while (big[index] != '\0' && index < len)
	{
		sup = 0;
		while ((big[index + sup] == little[sup]) && (index + sup) < len)
		{
			if (little[sup + 1] == '\0')
				return ((char *)&big[index]);
			sup++;
		}
		index++;
	}
	return (NULL);
}
