/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupiment <gupiment@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:23:48 by gupiment          #+#    #+#             */
/*   Updated: 2023/11/07 16:23:57 by gupiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//Libraries
# include "libft/libft.h"
# include <stdarg.h>

//Functions
int	ft_print_char(va_list args);
int	ft_print_hexadecimal(va_list args, char placeholder);
int	ft_print_integer(va_list args);
int	ft_print_pointer(va_list args);
int	ft_print_unsigned(va_list args);
int	ft_print_string(va_list args);
int	search_placeholder(char placeholder, va_list args);
int	ft_printf(const char *format, ...);

#endif
