/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_utils.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  gupiment <gupiment@student.42.rio>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:40:08 by  gupiment         #+#    #+#             */
/*   Updated: 2024/02/03 05:43:33 by  gupiment        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_UTILS_HPP

# define PHONEBOOK_UTILS_HPP

# include <iostream>
# include "Contact.hpp"

std::string	add_spaces(int n);

std::string	fix_width(std::string str, long unsigned max);

int			search_ui(Contact contacts[8]);

#endif
