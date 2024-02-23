/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:09:29 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/23 13:14:22 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string form, const int gradeToSign, const int gradeToExecute)
		: _form(form), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	_signed = false;
	std::cout << "Form constructor called" <<  std::endl;
	try
	{
		if (_gradeToSign > 150 || _gradeToExecute > 150)
			throw Form::GradeTooLowException();
		else if (_gradeToSign < 1 || _gradeToExecute < 1)
			throw Form::GradeTooHighException();
	}
	catch (std::exception & e)
	{
		std::cerr << "Form is not valid: " << e.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
}

Form::~Form() {
	std::cout << "Form destructor called" <<  std::endl;
}

Form::Form(const Form& other) : _form(other._form), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
	_signed = other._signed;
	std::cout << "Form copy constructor called" <<  std::endl;
}

Form& Form::operator=(const Form& other) {
	if (this != &other)
		_signed = other._signed;
	std::cout << "Form copy assignment operator called" << std::endl;
	return *this;
}

// important to receive refernce (Bureaucrat&) to work directly with the original object
void	Form::beSigned(const Bureaucrat& person) {
	if (person.getGrade() <= getGradeToSign())
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

const std::string	Form::getForm() const {
	return (_form);
}

bool	Form::getFirmedForm() const {
	return (_signed);
}

int	Form::getGradeToSign() const {
	return (_gradeToSign);
}

int	Form::getGradeToExecute() const {
	return (_gradeToExecute);
}

std::ostream& operator<<(std::ostream& out, Form& form) {
	out << "Form Name: " << form.getForm() << "\nGrade to Sign: " << form.getGradeToSign()
		<< "\nRequired Grade to Execute: " << form.getGradeToExecute() << std::endl;
	out << "Signed: " << (form.getFirmedForm() ? "true" : "false") << std::endl;
	return out;
}
