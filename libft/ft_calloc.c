/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupiment <gupiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:04:08 by gupiment          #+#    #+#             */
/*   Updated: 2023/10/15 20:04:08 by gupiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	if (nitems * size == 0 || nitems > 2147483647 / size)
		return (NULL);
	ptr = malloc(nitems * size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, nitems * size);
	return (ptr);
}
