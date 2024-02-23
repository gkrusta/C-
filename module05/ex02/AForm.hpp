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

#ifndef AForm_HPP
#define AForm_HPP

# include <iostream>
# include <exception>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{
	public:
		AForm(const std::string form, const int gradeToSign, const int gradeToExecute);
		~AForm();
		AForm(const AForm& other);
		AForm&	operator=(const AForm& other);

		const std::string	getForm() const;
		bool				getFirmedForm() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		void				beSigned(const Bureaucrat& person);
		
		virtual void		execute(Bureaucrat const & executor) const = 0;
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

		class	FormNotSignedException: public	std::exception
		{
			virtual const char* what() const throw()
			{
				return "Form hasn't been signed";
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