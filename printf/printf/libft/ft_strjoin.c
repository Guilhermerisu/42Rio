/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupiment <gupiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:04:43 by gupiment          #+#    #+#             */
/*   Updated: 2023/10/15 20:04:44 by gupiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_s1;
	size_t	len_s2;

	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (0);
	len_s1 = 0;
	while (s1[len_s1] != '\0')
	{
		str[len_s1] = s1[len_s1];
		len_s1++;
	}
	len_s2 = 0;
	while (s2[len_s2] != '\0')
	{
		str[len_s1 + len_s2] = s2[len_s2];
		len_s2++;
	}
	str[len_s1 + len_s2] = '\0';
	return (str);
}
