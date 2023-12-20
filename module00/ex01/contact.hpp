/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:00:01 by gkrusta           #+#    #+#             */
/*   Updated: 2023/12/20 14:42:18 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class contact
{
	public:
		//getters- to acces the private varibles (atributes)
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getNumber();
		std::string	getSecret();
		//setters- to give a value to the atributes
		void	setFirstName();
		void	setLastName();
		void	setNickname();
		void	setNickname();
		void	setSecret();
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		str::string _number;
		std::string _secret;
};

