/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:53:23 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/23 16:20:21 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"
# include <cstdlib>  // for rand() function

class	Bureaucrat;

class	RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(const std::string RobotomyRequestForm, const int gradeToSign, const int gradeToExecute);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& other);

		void	execute(Bureaucrat const & executor) const;
};

//std::ostream	&operator<<(std::ostream& out, RobotomyRequestForm& form);

#endif