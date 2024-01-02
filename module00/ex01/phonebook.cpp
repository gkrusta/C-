/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:56:16 by gkrusta           #+#    #+#             */
/*   Updated: 2024/01/02 18:07:41 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/* void	PhoneBook::deleteOldest()
{
	for (int i = 0; i < 8; i++)
		t_contact[i] == _contact[i + 1];
} */

PhoneBook::PhoneBook(void) {
	this->_counter = 0;
	std::cout << "Welcome to Phonebook" << std::endl;
	std::cout << "Chose 1 of the options: 1.ADD  2.SEARCH  3.EXIT" << std::endl;
}

void	PhoneBook::addContact()
{
	if (_counter > 7)
		std::cout << "Overwritting info about:" << contact[_counter % 8].getFirstName << std::endl;
	contact[_counter % 8].setFirstName();
	contact[_counter % 8].setLastName();
	contact[_counter % 8].setNickame();
	contact[_counter % 8].setPhoneNumber();
	contact[_counter % 8].setDarkestSecret();
	_counter++;
}
