/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mracz <mracz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 12:19:50 by mracz             #+#    #+#             */
/*   Updated: 2026/02/03 12:35:42 by mracz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_characters(char lowercase)
{
	char	uppercase;

	if (lowercase >= 'a' && lowercase <= 'z')
		uppercase = lowercase - 32;
	else
		uppercase = lowercase;
	std::cout << uppercase;
}

int	main(int argc, char **argv)
{
	int	o;
	int	i;

	o = 1;
	if (argc >= 2)
	{
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
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}