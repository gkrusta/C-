/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:53:23 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/25 18:30:08 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"
# include <cstdlib>  // for srand() function

class	Bureaucrat;

class	RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(const std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& other);

		void	execute(Bureaucrat const & executor) const;
};

#endif