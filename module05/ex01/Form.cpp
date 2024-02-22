/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:09:29 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/22 17:13:35 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _form("Unknown") {
	_signed = false;
	_gradeToSign = 42;
	_gradeToExecute = 42;
	std::cout << "Form default constructor called" <<  std::endl;
}

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
		else {
			_gradeToSign = gradeToSign;
			_gradeToExecute = gradeToExecute;
		}
	}
	catch (std::exception & e) // catching any exception that is derived from std::exception
	{
		std::cerr << "Form is not valid:" << e.what() << std::endl;
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

void	Form::beSigned(const Bureaucrat person) {
	if (person.getGrade() <= getGradeToSign())
		_signed = true;
	else
		throw Bureaucrat::GradeTooLowException();
}

const std::string	Form::getform() const {
	return (_form);
}

bool 	Form::getFirmedForm() const {
	return (_signed);
}

int const std::string	Form::getGradeToSign() const {
	return (_gradeToSign);
}

int const std::string	Form::getgradeToExecute() const {
	return (_gradeToExecute);
}

std::ostream	&operator<<(std::ostream& out, Form& form) {
	out << "Name: " << person.getName() << std::endl;
	out << "Grade to sign: " << person.getGrade() << "   (requierd grade: " << form.getGradeToSign() << " )" << std::endl;
	out << "Requierd grade to execute: " << form.getgradeToExecute() << " )" << std::endl;
	out << "Firmed status: " << form.getFirmedForm() << std::endl;
	return out;
}