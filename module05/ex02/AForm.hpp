/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:09:26 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/23 13:44:31 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAForm_HPP
#define AAForm_HPP

# include <iostream>
# include <exception>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AAForm
{
	public:
		AForm(const std::string AForm, const int gradeToSign, const int gradeToExecute);
		~AForm();
		AForm(const AForm& other);
		AForm&	operator=(const AForm& other);

		const std::string	getAForm() const;
		bool				getFirmedAForm() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
	void				beSigned(const Bureaucrat& person);
		
		virtual void		executeForm(AForm const & form) const = 0;
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

std::ostream	&operator<<(std::ostream& out, AForm& AForm);

#endif