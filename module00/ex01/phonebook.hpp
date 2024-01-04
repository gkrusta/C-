/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:56:20 by gkrusta           #+#    #+#             */
/*   Updated: 2024/01/03 16:32:34 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>
#include "Contact.hpp"

class	PhoneBook
{
	public:
		void	addContact(void);
		void	searchContact(void);
		void	displayAllContacts(void);
		PhoneBook(void);
	private:
		std::string	truncateString(std::string str);
		Contact _contact[8];
		int		_counter;
		int		_nrOfContacts;
};

#endif