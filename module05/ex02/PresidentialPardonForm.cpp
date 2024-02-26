/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:50:47 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/26 11:43:28 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: AForm(target, "PresidentialPardonForm", 25, 5) {
	std::cout << "PresidentialPardonForm constructor called" <<  std::endl;
}


PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other) {
	std::cout << "PresidentialPardonForm copy constructor called" <<  std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	if (this != &other)
		AForm::operator=(other);
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	try
	{
		if (!getFirmedForm())
			throw AForm::FormNotSignedException();
		else if (executor.getGrade() > getGradeToExecute())
			throw AForm::GradeTooLowException();
		else
			std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
