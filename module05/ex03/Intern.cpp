/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:31:04 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/26 12:50:58 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern default constructor called" <<  std::endl;
}

Intern::~Intern() {
	std::cout << "Intern destructor called" <<  std::endl;
}

Intern ::Intern(const Intern & other) {
	(void)other;
}

Intern & Intern::operator=(const Intern & other) {
	(void)other;
	return *this;
}

AForm*	Intern::makeForm(std::string name, std::string target) {
	std::string forms[3] = {"shrubbery request", "robotomy request", "presidential request"};
	int	i = 0;
	AForm* ptr = nullptr;
	while (i < 3 && forms[i] != name)
		i++;
	switch (i) {
		case 0:
			std::cout << "Intern creates form: " << name << std::endl;
			ptr = new ShrubberyCreationForm(target);
			return ptr;
		case 1:
			std::cout << "Intern creates form: " << name << std::endl;
			ptr = new RobotomyRequestForm(target);
			return ptr;
		case 2:
			std::cout << "Intern creates form: " << name << std::endl;
			ptr = new PresidentialPardonForm(target);
			return ptr;
		case 3:
			std::cout << "Error: Unknown form name!" << std::endl;
	}
	return ptr;
}
