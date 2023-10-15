/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupiment <gupiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:03:29 by gupiment          #+#    #+#             */
/*   Updated: 2023/10/15 20:03:30 by gupiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	indice;
	unsigned int	length;
	char			*str;

	length = ft_strlen(s);
	str = (char *)ft_calloc(length + 1, sizeof(char));
	if (!str)
		return (0);
	indice = 0;
	while (s[indice] != '\0')
	{
		str[indice] = (*f)(indice, s[indice]);
		indice++;
	}
	return (str);
}
