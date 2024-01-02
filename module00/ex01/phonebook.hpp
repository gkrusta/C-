/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:56:20 by gkrusta           #+#    #+#             */
/*   Updated: 2024/01/02 18:08:16 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>
#include "contact.hpp"

class	PhoneBook
{
	public:
		void	addContact();
		void	searchContact();
		void	displayAllContacts();
		PhoneBook(void);
	private:
		contact _contact[8];
		int		_counter;
};

#endif