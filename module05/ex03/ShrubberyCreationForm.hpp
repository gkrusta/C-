/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:51:50 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/25 18:30:11 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <exception>
# include <fstream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(const std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);

		void	execute(Bureaucrat const & executor) const;
};

#endif