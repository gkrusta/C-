/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:41:46 by gkrusta           #+#    #+#             */
/*   Updated: 2023/12/20 17:15:30 by gkrusta          ###   ########.fr       */
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

std::string	contact::getNumber() {
	return (_number);
}

std::string	contact::getSecret() {
	return (_secret);
}

void	contact::setFirstName() {
	std::string str;
	put name:
		std::getline(std::cin, str);
	if (str)
		_firstName = str;
	
}

void	contact::setLastName(str::string str) {
	_lastName = str;
}

void	contact::setNickname(str::string str) {
	_nickname = str;
}

void	contact::setNickname(str::string str) {
	_number = str;
}

void	contact::setSecret(str::string str) {
	_secret = str;
}
