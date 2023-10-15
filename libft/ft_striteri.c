/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupiment <gupiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:03:19 by gupiment          #+#    #+#             */
/*   Updated: 2023/10/15 20:03:20 by gupiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	indice;

	indice = 0;
	while (s[indice] != '\0')
	{
		(*f)(indice, &s[indice]);
		indice++;
	}
}
