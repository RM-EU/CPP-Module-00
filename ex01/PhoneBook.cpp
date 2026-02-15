/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mracz <mracz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:33:55 by mracz             #+#    #+#             */
/*   Updated: 2026/02/15 19:32:29 by mracz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <iomanip>

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
	//printing the arrays:
	int	i = 0;
	while (i < 8)
	{
		std::cout << i << ":contact" << "\n" << "\n";
		Contacts[i].printcontact();
		i++;
	}
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
	Contact	data;
	std::string first_name;
	std::string str1 = "masodik szoveg ami tul hosszu";

	first_name = data.getFirstName();
	std::cout << first_name << "\n";

	// std::cout << std::setw(10) << std::right << "Index" << "|";
	// std::cout << std::setw(10) << std::right << "First Name" << "|";
	// std::cout << std::setw(10) << std::right << "Last Name" << "|";
	// std::cout << std::setw(10) << std::right << "Nickname" << std::endl;


	
	// std::cout << "----------|----------|----------|----------|" << std::endl;
	// std::cout << "     Index|First Name| Last Name|   Nickname" << std::endl;
	// std::cout << "--------------------------------------------" << std::endl;
	// std::cout << std::setw(10) << std::right << truncate(first_name, 10) << "|";
	// std::cout << std::setw(10) << std::right << truncate(str1, 10) << "|" << "\n";
	
}