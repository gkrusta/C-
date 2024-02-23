/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:09:29 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/23 13:47:34 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string form, const int gradeToSign, const int gradeToExecute)
		: _AForm(AForm), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	_signed = false;
	std::cout << "AForm constructor called" <<  std::endl;
	try
	{
		if (_gradeToSign > 150 || _gradeToExecute > 150)
			throw AForm::GradeTooLowException();
		else if (_gradeToSign < 1 || _gradeToExecute < 1)
			throw AForm::GradeTooHighException();
	}
	catch (std::exception & e)
	{
		std::cerr << "AForm is not valid: " << e.what() << std::endl;
		std::exit(EXIT_FAILURE);
	}
}

AForm::~AForm() {
	std::cout << "AForm destructor called" <<  std::endl;
}

AForm::AForm(const AForm& other) : _form(other._form), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
	_signed = other._signed;
	std::cout << "AForm copy constructor called" <<  std::endl;
}

AForm& AForm::operator=(const AForm& other) {
	if (this != &other)
		_signed = other._signed;
	std::cout << "AForm copy assignment operator called" << std::endl;
	return *this;
}

// important to receive refernce (Bureaucrat&) to work directly with the original object
void	AForm::beSigned(const Bureaucrat& person) {
	if (person.getGrade() <= getGradeToSign())
		_signed = true;
	else
		throw AForm::GradeTooLowException();
}

const std::string	AForm::getForm() const {
	return (_form);
}

bool	AForm::getFirmedForm() const {
	return (_signed);
}

int	AForm::getGradeToSign() const {
	return (_gradeToSign);
}

int	AForm::getGradeToExecute() const {
	return (_gradeToExecute);
}

std::ostream& operator<<(std::ostream& out, AForm& form) {
	out << "Form Name: " << form.getForm() << "\nGrade to Sign: " << form.getGradeToSign()
		<< "\nRequired Grade to Execute: " << form.getGradeToExecute() << std::endl;
	out << "Signed: " << (form.getFirmedForm() ? "true" : "false") << std::endl;
	return out;
}
