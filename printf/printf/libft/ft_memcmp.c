/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupiment <gupiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:01:17 by gupiment          #+#    #+#             */
/*   Updated: 2023/10/15 20:01:18 by gupiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s_s1;
	const unsigned char	*s_s2;
	size_t				index;

	index = 0;
	s_s1 = (const unsigned char *)s1;
	s_s2 = (const unsigned char *)s2;
	while (index < n)
	{
		if (s_s1[index] != s_s2[index])
		{
			return (s_s1[index] - s_s2[index]);
		}
		index++;
	}
	return (0);
}
