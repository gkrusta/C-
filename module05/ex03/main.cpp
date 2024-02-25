/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:03:26 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/25 19:38:38 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
//#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void) {

	std::cout << "=== NEW BUREAUCRAT ===" << std::endl;
	Bureaucrat	personA("Homer", 5);
	personA.incrementGrade();
	std::cout << personA;

	std::cout << "\n=== NEW INTERN ===" << std::endl;
	Intern intern;
	AForm* formA;
	formA = intern.makeForm("RobotomyRequestForm", "Bender");

	if (formA) {
		std::cout << "\n=== VALID FORM ===" << std::endl;
		personA.signForm(*formA);
		formA->execute(personA);
	}

/* 	std::cout << "\n=== INVALID FORM ===" << std::endl;
	//AForm*	form  = new ShrubberyCreationForm("Form");
	Form	newForm("Invalid Quiz", 0, 10);
	personA.signForm(newForm);
	std::cout << newForm; */

	delete formA;
	return (0);
}