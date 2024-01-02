/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:41:46 by gkrusta           #+#    #+#             */
/*   Updated: 2024/01/02 16:49:36 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	contact::getFirstName() {
	return (_firstName);
}

std::string	contact::getLastName() {
	return (_lastName);
}

std::string	contact::getNickname() {
	return (_nickname);
}

std::string	contact::getPhoneNumber() {
	return (_number);
}

std::string	contact::getSecret() {
	return (_secret);
}

void	contact::setFirstName() {
	std::string str;

	while (1)
	{
		std::cout << "First name: ";
		std::getline(std::cin, str);
		if (str.empty())
			std::cout << "A field cannot be empty" << std::endl;
		else {
			_firstName = str;
			break ;
		}
	}
}

void	contact::setLastName(str::string str) {
	std::string str;

	while (1)
	{
		std::cout << "Last name: ";
		std::getline(std::cin, str);
		if (str.empty())
			std::cout << "A field cannot be empty" << std::endl;
		else {
			_lastName = str;
			break ;
		}
	}
}

void	contact::setNickname(str::string str) {
	std::string str;

	while (1)
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, str);
		if (str.empty())
			std::cout << "A field cannot be empty" << std::endl;
		else {
			_nickname = str;
			break ;
		}
	}
}

void	contact::phoneNumber(str::string str) {
	std::string str;

	while (1)
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, str);
		if (str.empty())
			std::cout << "A field cannot be empty" << std::endl;
		else if (!std::all_of(str.begin(), str.end(), std::isdigit))
			std::cout << "Invalid phone number. Please enter numeric characters only!" << std::endl;
		else {
			_phoneNumber = str;
			break ;
		}
	}
}

void	contact::setSecret(str::string str) {
	std::string str;

	while (1)
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, str);
		if (str.empty())
			std::cout << "A field cannot be empty" << std::endl;
		else {
			_secret = str;
			break ;
		}
	}
}
