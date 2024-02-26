/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:03:26 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/26 12:48:15 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void) {

	std::cout << "=== NEW BUREAUCRAT ===" << std::endl;
	Bureaucrat	personA("Homer", 5);
	std::cout << personA;

	std::cout << "\n=== INTERN ===" << std::endl;
	Intern intern;
	AForm* formA;
	formA = intern.makeForm("shrubbery request", "Bernand");

	if (formA) {
		std::cout << "\n=== VALID FORM ===" << std::endl;
		personA.signForm(*formA);
		formA->execute(personA);
	}

	std::cout << "\n=== NEW INTERN ===" << std::endl;
	Intern	newIntern;
	AForm*	formB;
	
	std::cout << "\n=== INVALID FORM ===" << std::endl;
	formB = intern.makeForm("invalid form", "Donkey");
	if (formB) {
		personA.signForm(*formB);
		formB->execute(personA);
	}

	std::cout << std::endl;
	delete formA;
	delete formB;
	return (0);
}