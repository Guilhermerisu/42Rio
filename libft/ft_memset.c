/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupiment <gupiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:06:05 by gupiment          #+#    #+#             */
/*   Updated: 2023/10/15 20:06:07 by gupiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			index;
	unsigned char	*ptr;

	ptr = str;
	index = 0;
	while (index < len)
	{
		ptr[index] = (unsigned char)c;
		index++;
	}
	return (str);
}
