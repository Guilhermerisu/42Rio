/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliar_functions_more.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupiment <gupiment@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:29:00 by gupiment          #+#    #+#             */
/*   Updated: 2023/11/07 16:29:07 by gupiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexadecimal(va_list args, char placeholder)
{
	unsigned int	number;
	char			*string;
	int				index;
	int				size;

	index = 0;
	number = va_arg(args, unsigned int);
	string = ft_hex_itoa(number);
	if (placeholder == 'X')
	{
		while (string[index] != '\0')
		{
			string[index] = ft_toupper(string[index]);
			index++;
		}
	}
	ft_putstr_fd(string, 1);
	size = ft_strlen(string);
	free(string);
	return (size);
}

int	ft_print_pointer(va_list args)
{
	void	*pointer;
	char	*string;
	int		size;

	pointer = va_arg(args, void *);
	string = ft_pointer_itoa((unsigned long int) pointer);
	if (!pointer)
	{
		free(string);
		return (write(1, "(nil)", 5));
	}
	write(1, "0x", 2);
	ft_putstr_fd(string, 1);
	size = ft_strlen(string) + 2;
	free(string);
	return (size);
}
