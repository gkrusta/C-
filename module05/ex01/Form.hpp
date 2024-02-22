/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:09:26 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/22 16:43:28 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <exception>
#include "Bureaucrat.hpp"

class	Form
{
	public:
		Form();
		Form(std::string const name, const int grade);
		~Form();
		Form(const Form& other);
		Form&	operator=(const Form& other);

		const std::string	getform() const;
		bool	getFirmedForm() const
		int const std::string	getGradeToSign() const;
		int const std::string	getgradeToExecute() const;

		class	GradeTooHighException: public	std::exception
		{
			virtual const char* what() const throw()
			{
				return "Grade Too High";
			}
		};

		class	GradeTooLowException: public	std::exception
		{
			virtual const char* what() const throw()
			{
				return "Grade Too Low";
			}
		};

	private:
		std::string const	_form;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExecute;
};

std::ostream	&operator<<(std::ostream& out, Form& form);

#endif