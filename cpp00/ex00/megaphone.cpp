/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  gupiment <gupiment@student.42.rio>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:15:55 by  gupiment         #+#    #+#             */
/*   Updated: 2024/02/03 05:43:42 by  gupiment        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv){
	int		i;
	int		j = -1;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argc > 1 && argv && argv[++j])
	{
		i = -1;
		while (j > 0 && argv[j][++i])
			std::cout << (char)std::toupper(argv[j][i]);
	}
	std::cout << std::endl;
	return (0);
}
