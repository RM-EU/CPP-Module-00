/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mracz <mracz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 19:10:24 by mracz             #+#    #+#             */
/*   Updated: 2026/02/10 18:51:41 by mracz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	secret;
		
	public:
		Contact();
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string secret);
		~Contact();
		void printcontact();
};

#endif