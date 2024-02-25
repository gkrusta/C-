/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:31:02 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/25 19:15:22 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

# include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
# include "Bureaucrat.hpp"
#include "AForm.hpp"

class	Bureaucrat;

class	Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern& other);
		Intern&	operator=(const Intern& other);

		AForm*	makeForm(std::string name, std::string target);
};

#endif