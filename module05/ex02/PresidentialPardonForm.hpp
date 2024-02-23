/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:52:22 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/23 16:00:27 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(const std::string PresidentialPardonForm, const int gradeToSign, const int gradeToExecute);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);

		void	execute(Bureaucrat const & executor) const;
};

//std::ostream	&operator<<(std::ostream& out, PresidentialPardonForm& form);

#endif