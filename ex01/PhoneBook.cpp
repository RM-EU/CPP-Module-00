/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mracz <mracz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:33:55 by mracz             #+#    #+#             */
/*   Updated: 2026/02/11 16:21:28 by mracz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <iostream>

PhoneBook::PhoneBook()
{
	contact_count = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::AddContact()
{
	std::string	firstname, lastname, nickname, phonenumber, secret;
	int	index;

	do
	{
		std::cout << "Enter first name: ";
		getline(std::cin, firstname);
	} while (firstname.empty());

	do
	{
		std::cout << "Enter last name: ";
		getline(std::cin, lastname);
	} while (lastname.empty());

	do
	{
		std::cout << "Enter nickaname: ";
		getline(std::cin, nickname);
	} while (nickname.empty());

	do
	{
		std::cout << "Enter the phonenumber: ";
		getline(std::cin, phonenumber);
	} while (phonenumber.empty());

	do
	{
		std::cout << "What is your darkest secret?: ";
		getline(std::cin, secret);
	} while (secret.empty());

	index = contact_count % 8;
	Contacts[index] = Contact(firstname, lastname, nickname, phonenumber, secret);
	contact_count++;
	// std::cout << firstname << std::endl;
	int	i = 0;
	while (i < 8)
	{
		std::cout << i << ":contact" << "\n" << "\n";
		Contacts[i].printcontact();
		i++;
	}
}