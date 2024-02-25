/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:03:26 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/25 18:36:27 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void) {

	std::cout << "=== NEW BUREAUCRAT ===" << std::endl;
	Bureaucrat	personA("Homer", 5);
	personA.incrementGrade();
	std::cout << personA;

	std::cout << "\n=== VALID FORM ===" << std::endl;
	AForm*	test  = new RobotomyRequestForm("Mo");
	personA.signForm(*test);
	test->execute(personA);

	std::cout << "\n=== HASN'T SIGNED THE FORM ===" << std::endl;
	AForm*	quiz  = new PresidentialPardonForm("Bureaucrat");
	quiz->execute(personA);


	std::cout << "\n=== CAN'T EXECUTE THE FORM ===" << std::endl;
	personA.decrementGrade();
	personA.decrementGrade();
	personA.signForm(*quiz);
	quiz->execute(personA);

/* 	std::cout << "\n=== INVALID FORM ===" << std::endl;
	//AForm*	form  = new ShrubberyCreationForm("Form");
	Form	newForm("Invalid Quiz", 0, 10);
	personA.signForm(newForm);
	std::cout << newForm; */
	delete quiz;
	delete test;
	return (0);
}