/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mracz <mracz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:33:55 by mracz             #+#    #+#             */
/*   Updated: 2026/02/11 12:04:27 by mracz            ###   ########.fr       */
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

	std::cout << "Enter first name: ";
	getline(std::cin, firstname);
	std::cout << "Enter last name: ";
	getline(std::cin, lastname);
	std::cout << "Enter nickaname: ";
	getline(std::cin, nickname);
	std::cout << "Enter the phonenumber: ";
	getline(std::cin, phonenumber);
	std::cout << "What is your darkest secret?: ";
	getline(std::cin, secret);
	Contacts[0] = Contact(firstname, lastname, nickname, phonenumber, secret);
	// std::cout << firstname << std::endl;
	Contacts[0].printcontact();
}