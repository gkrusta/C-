/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:03:26 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/26 12:45:40 by gkrusta          ###   ########.fr       */
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
	std::cout << personA;

	std::cout << "\n=== VALID FORM 1 (Declaring Instance as Pointer to Abstract Class) ===" << std::endl;
	AForm*	test  = new RobotomyRequestForm("Mo");
	personA.signForm(*test);
	test->execute(personA);

	std::cout << "\n=== VALID FORM 2 ===" << std::endl;
	AForm*	quiz  = new PresidentialPardonForm("Bureaucrat");
	personA.signForm(*quiz);
	quiz->execute(personA);

	std::cout << "\n=== VALID FORM 3 (Declaring Instance Directly )===" << std::endl;
	ShrubberyCreationForm	newForm("Tree");
	std::cout << "\n=== HASN'T SIGNED THE FORM ===" << std::endl;
	std::cout << newForm;
	newForm.execute(personA);
	std::cout << "\n=== SIGNED THE FORM ===" << std::endl;
	personA.signForm(newForm);
	std::cout << newForm;
	newForm.execute(personA);

	std::cout << "\n=== COPY FORM ===" << std::endl;
	ShrubberyCreationForm	newForm2("target");
	newForm2 = newForm;
	std::cout << newForm2;

	std::cout << "\n=== CAN'T EXECUTE THE FORM ===" << std::endl;
	personA.decrementGrade();
	personA.decrementGrade();
	personA.signForm(*quiz);
	quiz->execute(personA);

	std::cout << std::endl;
	delete quiz;
	delete test;
	return (0);
}