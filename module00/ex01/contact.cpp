/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:41:46 by gkrusta           #+#    #+#             */
/*   Updated: 2024/01/04 09:55:09 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	Contact::getFirstName() {
	return (_firstName);
}

std::string	Contact::getLastName() {
	return (_lastName);
}

std::string	Contact::getNickname() {
	return (_nickname);
}

std::string	Contact::getPhoneNumber() {
	return (_phoneNumber);
}

std::string	Contact::getSecret() {
	return (_secret);
}

void	Contact::setFirstName() {
	std::string str;

	while (1)
	{
		std::cout << "First name: ";
		std::cin >> str;
		if (str.empty())
			std::cout << "A field cannot be empty" << std::endl;
		else {
			_firstName = str;
			break ;
		}
	}
}

void	Contact::setLastName(void) {
	std::string str;

	while (1)
	{
		std::cout << "Last name: ";
		std::cin >> str;
		if (str.empty())
			std::cout << "A field cannot be empty" << std::endl;
		else {
			_lastName = str;
			break ;
		}
	}
}

void	Contact::setNickname(void) {
	std::string str;

	while (1)
	{
		std::cout << "Nickname: ";
		std::cin >> str;
		if (str.empty())
			std::cout << "A field cannot be empty" << std::endl;
		else {
			_nickname = str;
			break ;
		}
	}
}

bool	Contact::isNumber(std::string nr) {
	for(unsigned long i = 0; i < nr.length(); i++) {
		if (!(nr[i] >= '0' && nr[i] <= '9'))
			return false;
	}
	return true;
}

void	Contact::setPhoneNumber(void) {
	std::string str;

	while (1)
	{
		std::cout << "Phone number: ";
		std::cin >> str;
		if (str.empty())
			std::cout << "A field cannot be empty" << std::endl;
		else if (!isNumber(str))
			std::cout << "Invalid phone number. Please enter numeric characters only!" << std::endl;
		else {
			_phoneNumber = str;
			break ;
		}
	}
}

void	Contact::setSecret(void) {
	std::string str;

	while (1)
	{
		std::cout << "Darkest secret: ";
		std::cin >> str;
		if (str.empty())
			std::cout << "A field cannot be empty" << std::endl;
		else {
			_secret = str;
			break ;
		}
	}
}
