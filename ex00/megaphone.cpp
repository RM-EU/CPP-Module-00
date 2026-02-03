/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mracz <mracz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 12:19:50 by mracz             #+#    #+#             */
/*   Updated: 2026/02/03 12:24:41 by mracz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_characters(char lowercase)
{
	char	uppercase;

	uppercase = lowercase - 32;
	std::cout << uppercase;
}

int	main(int argc, char **argv)
{
	int	o;
	int	i;

	o = 1;
	while (argv[o])
	{
		i = 0;
		while(argv[o][i])
		{
			print_characters(argv[o][i]);
			i++;
		}
		o++;
	}
	return (0);
}