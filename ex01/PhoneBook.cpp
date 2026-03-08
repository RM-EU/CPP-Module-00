/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mracz <mracz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:33:55 by mracz             #+#    #+#             */
/*   Updated: 2026/03/08 15:15:39 by mracz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

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
		getline_wrapped(firstname);
	} while (firstname.empty());
	do
	{
		std::cout << "Enter last name: ";
		getline_wrapped(lastname);
	} while (lastname.empty());
	do
	{
		std::cout << "Enter nickaname: ";
		getline_wrapped(nickname);
	} while (nickname.empty());
	do
	{
		std::cout << "Enter the phonenumber: ";
		getline_wrapped(phonenumber);
	} while (phonenumber.empty());
	do
	{
		std::cout << "What is your darkest secret?: ";
		getline_wrapped(secret);
	} while (secret.empty());
	index = contact_count % 8;
	Contacts[index] = Contact(firstname, lastname, nickname, phonenumber, secret);
	contact_count++;
}


std::string&	truncate(std::string& str, size_t width)
{
	if (str.length() > width - 1)
	{
		str.resize(width - 1);
		return (str.append("."));
	}
	return (str);
}

void	PhoneBook::Search_command()
{
	Contact		data;
	std::string first_name;
	std::string	last_name;
	std::string	nickname;
	int			index;
	bool		valid_index;
	std::string	inp;

	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First Name" << "|";
	std::cout << std::setw(10) << std::right << "Last Name" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
	index  = 0 ;
	while (index < contact_count && index < 8)
	{
		first_name = Contacts[index].getFirstName();
		last_name = Contacts[index].getLastName();
		nickname = Contacts[index].getNickname();
		std::cout << std::setw(10) << std::right << index << "|";
		std::cout << std::setw(10) << std::right << truncate(first_name, 10) << "|";
		std::cout << std::setw(10) << std::right << truncate(last_name, 10) << "|";
		std::cout << std::setw(10) << std::right << truncate(nickname, 10) << std::endl;
		index++;
	}
	valid_index = false;
	while(!valid_index)
	{
		std::cout << "Choose an index to display!" << std::endl;
		std::cin >> index;
		getline_wrapped(inp);
		index = atoi(inp.c_str());
		if (index < 0 || index >= contact_count)
			std::cout << "index is out of range" << std::endl;
		else
			valid_index = true;
	}
	Contacts[index].printcontact();
}
