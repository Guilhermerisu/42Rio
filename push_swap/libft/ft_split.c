/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupiment <gupiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:06:12 by gupiment          #+#    #+#             */
/*   Updated: 2023/10/15 20:06:13 by gupiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lensubstring(char const *str, int start, char c)
{
	int	length;

	length = 0;
	while (str[start] != c && str[start] != '\0')
	{
		start++;
		length++;
	}
	return (length);
}

static int	ft_countsubstring(char const *str, char c)
{
	int	index;
	int	count;

	count = 0;
	index = 0;
	while (str[index] != '\0')
	{
		while (str[index] == c && str[index] != '\0')
			index++;
		if (str[index])
			count++;
		while (str[index] != c && str[index])
			index++;
	}
	return (count);
}

char	**ft_split(char const *str, char c)
{
	int		start;
	int		index;
	int		sublen;
	int		subnumber;
	char	**ptrbox;

	if (!str)
		return (0);
	subnumber = ft_countsubstring(str, c);
	ptrbox = (char **)ft_calloc((subnumber + 1), sizeof(char *));
	start = 0;
	index = 0;
	while (index < subnumber)
	{
		while (str[start] && str[start] == c)
			start++;
		sublen = ft_lensubstring(str, start, c);
		ptrbox[index] = ft_substr(str, start, sublen);
		start = start + sublen;
		index++;
	}
	return (ptrbox);
}
