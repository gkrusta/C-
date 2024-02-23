/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:09:26 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/23 12:45:01 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <exception>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	public:
		Form(const std::string form, const int gradeToSign, const int gradeToExecute);
		~Form();
		Form(const Form& other);
		Form&	operator=(const Form& other);

		const std::string	getForm() const;
		bool				getFirmedForm() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		void				beSigned(const Bureaucrat& person);

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