/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mracz <mracz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 19:09:58 by mracz             #+#    #+#             */
/*   Updated: 2026/02/15 19:19:15 by mracz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>

class	PhoneBook
{
	private:
		Contact Contacts[8];
		int		contact_count;

	public:
		PhoneBook();
		~PhoneBook();
		void	AddContact();
		void	Search_command();
};

#endif