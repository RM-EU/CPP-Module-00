/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mracz <mracz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:17:52 by mracz             #+#    #+#             */
/*   Updated: 2026/03/05 17:44:02 by mracz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>

int	main()
{
	PhoneBook acces;
	std::string	command;

	std::cout << "Use the following commands: ADD or SEARCH or EXIT" << std::endl;
	while (1)
	{
		std::cout << "enter a command" << std::endl;
		if (!(std::getline(std::cin, command)))
			return (1);
		if (command.empty())
			continue;
		if (command.compare("ADD") == 0)
			acces.AddContact();
		else if (command.compare("EXIT") == 0)
			break ;
		else if (command.compare("SEARCH") == 0)
			acces.Search_command();
		else
			std::cout << "not a valid command" << std::endl;
		// if (command == "EXIT")
		// 	break ;
	}
}
