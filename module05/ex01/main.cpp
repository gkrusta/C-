/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:03:26 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/26 12:32:12 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {

	std::cout << "=== NEW BUREAUCRAT ===" << std::endl;
	Bureaucrat	personA("Homer", 150);
	personA.incrementGrade();
	std::cout << personA;

	std::cout << "\n=== VALID FORM ===" << std::endl;
	Form	quiz("Quiz", 149, 20);
	personA.signForm(quiz);
	std::cout << quiz;
	
	std::cout << "\n=== INVALID FORM ===" << std::endl;
	Form	newForm("Invalid Quiz", 0, 20);
	std::cout << newForm;
	personA.signForm(newForm);

	return (0);
}
