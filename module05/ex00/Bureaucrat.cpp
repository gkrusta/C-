/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:01:15 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/26 12:40:07 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknown") {
	_grade = 42;
	std::cout << "Bureaucrat default constructor called" <<  std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
	std::cout << "Bureaucrat constructor called" <<  std::endl;
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			_grade = grade;
	}
	catch (std::exception & e) // catching any exception that is derived from std::exception
	{
		std::cerr << "Exception:" << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called" <<  std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name) {
	_grade = other._grade;
	std::cout << "Bureaucrat copy constructor called" <<  std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other)
		_grade = other._grade;
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	return *this;
}

const std::string	Bureaucrat::getName() const {
	return (_name);
}

int	Bureaucrat::getGrade() const {
	return (_grade);
}

void	Bureaucrat::incrementGrade(unsigned int incr) {
	try
	{
		if (_grade - incr < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			_grade -= incr;
	}
	catch (const std::exception & e) {
		std::cerr << "Exception while incrementing: " << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade(unsigned int decr) {
	try
	{
		if (_grade + decr > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			_grade += decr;
	}
	catch (const std::exception & e) {
		std::cerr << "Exception while decrementing: " << e.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream& out, Bureaucrat& person) {
	out << person.getName() << ", bureaucrat grade " << person.getGrade() << std::endl;
	return out;
}