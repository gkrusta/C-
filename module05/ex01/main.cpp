/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:03:26 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/22 17:04:17 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {

	std::cout << "=== INCREMENT & DECREMENT POSSIBLE ===" << std::endl;
	Bureaucrat	personA("Pablo", 150);
	personA.incrementGrade();
	std::cout << personA;
	personA.decrementGrade();
	std::cout << personA;

	std::cout << "\n=== INCREMENT & DECREMENT NOT POSSIBLE ===" << std::endl;
	Bureaucrat	personB("Davyd", 1);
	personB.incrementGrade();
	std::cout << personB;
	personA.decrementGrade();
	std::cout << personA;

	std::cout << "\n=== ASIGNMENT OVERLOAD ===" << std::endl;
	personB = personA;
	std::cout << personB;

	std::cout << "\n=== NEW FORM ===" << std::endl;
	Form	myForm("Quiz", 10, 10);
	PersonA.signForm(myForm);
	std::cout << myForm;
	
	return (0);
}