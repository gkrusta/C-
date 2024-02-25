/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:53:20 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/25 18:34:04 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: AForm(target, "RobotomyRequestForm", 72, 45) {
	std::cout << "RobotomyRequestForm constructor called" <<  std::endl;
}


RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other) {
	std::cout << "RobotomyRequestForm copy constructor called" <<  std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this != &other)
		AForm::operator=(other);
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	try
	{
		if (!getFirmedForm())
			throw AForm::FormNotSignedException();
		else if (executor.getGrade() > getGradeToExecute())
			throw AForm::GradeTooLowException();
		else {
			std::srand(std::time(nullptr));
			int randomValue = std::rand();
			std::cout << "Making drilling noises..." << std::endl;
			if (randomValue % 2 == 0)
				std::cout << getTarget() << " has been robotomized successfully." << std::endl;
			else
				std::cout << getTarget() << " robotomy failed." << std::endl;
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
