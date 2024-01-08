/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:56:16 by gkrusta           #+#    #+#             */
/*   Updated: 2024/01/08 15:23:51 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "Welcome to Phonebook" << std::endl;
	this->_counter = 0;
	this->_nrOfContacts = 0;
}

void	PhoneBook::addContact(void)
{
	if (_counter > 7)
		std::cout << "Overwritting info about:" << _contact[_counter % 8].getFirstName() << std::endl;
	_contact[_counter % 8].setFirstName();
	_contact[_counter % 8].setLastName();
	_contact[_counter % 8].setNickname();
	_contact[_counter % 8].setPhoneNumber();
	_contact[_counter % 8].setSecret();
	if (_counter < 8)
		_nrOfContacts++;
	_counter++;
}

std::string	PhoneBook::truncateString(std::string str) {
	unsigned size = str.size();

	if (size > 10) {
		std::string newStr = str.substr(0, 9);
		newStr.insert(9, ".");
		return (newStr);
	}
	else
		return (str);
}

void	PhoneBook::displayAllContacts() {
	std::cout << "|" << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickanme" << "|" << std::endl;

	for (int i = 0; i < _nrOfContacts; i++) {
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << truncateString(_contact[i].getFirstName()) << "|";
		std::cout << std::setw(10) << truncateString(_contact[i].getLastName()) << "|";
		std::cout << std::setw(10) << truncateString(_contact[i].getNickname()) << "|" << std::endl;
	}
}



void	PhoneBook::searchContact() {
	if (_nrOfContacts > 0) {
		std::string	strIndex;
		Contact	selectedContact;

		displayAllContacts();
		std::cout << "Chose one of the following index to display the corresponding contact: ";
		std::getline(std::cin, strIndex, '\n');
		if (!strIndex.empty()) {
			int	index = std::stoi(strIndex);
			if (index > 0 && index <= _nrOfContacts) {
				selectedContact = _contact[index - 1];
				std::cout << "Displaying information about index " << index << ":" << std::endl;
				std::cout << "First name: " << selectedContact.getFirstName() << std::endl;
				std::cout << "Last name: " << selectedContact.getLastName() << std::endl;
				std::cout << "Nickname: " << selectedContact.getNickname() << std::endl;
				std::cout << "Phone number: " << selectedContact.getPhoneNumber() << std::endl;
				std::cout << "Darkest secret: " << selectedContact.getSecret() << std::endl;
			}
			else
				std::cout << "There is no such an index!" << std::endl;
		}
		else
			std::cout << "The chosen contact doesn't exist!" << std::endl;
	}
	else
		std::cout << "There are no contacts in the phonebook!" << std::endl;
}
