/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tools.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  gupiment <gupiment@student.42.rio>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:49:14 by  gupiment         #+#    #+#             */
/*   Updated: 2024/01/31 17:49:15 by  gupiment        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TOOLS_H

# define LIBFT_TOOLS_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

size_t		ft_strlen(const char *s);
int			ft_putstr_fd(char *s, int fd);
int			ft_isspace(char c);
int			ft_isdigit(int c);
long long	ft_atoi(const char *nptr);
int			ft_putchar_fd(char c, int fd);
int			ft_putnbr_fd(long unsigned n, int fd);
void		ft_free_matrix(char ***m);
int			ft_putnchar_fd(char c, int fd, int n);
int			ft_nbrlen(long n, int base);
void		ft_lstadd_back(t_list **lst, t_list *newnode);
t_list		*ft_lstnew(void *content);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstdelone(t_list *lst, void (*del)(void*));

#endif
