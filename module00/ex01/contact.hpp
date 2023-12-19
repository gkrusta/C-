/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:00:01 by gkrusta           #+#    #+#             */
/*   Updated: 2023/12/19 20:41:27 by gkrusta          ###   ########.fr       */
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
		//getters
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getNumber();
		std::string	getSecret();
		//setters
		void	setFirstName();
		void	setLastName();
		void	setNickname();
		void	setNumber();
		void	setSecret();
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		str::string _number;
		std::string _secret;
};

