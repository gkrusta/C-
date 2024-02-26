/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:51:55 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/26 10:20:25 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm(target, "ShrubberyCreationForm", 145, 137) {
	std::cout << "ShrubberyCreationForm constructor called" <<  std::endl;
}


ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other) {
	std::cout << "ShrubberyCreationForm copy constructor called" <<  std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	if (this != &other)
		AForm::operator=(other);
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	try
	{
		if (!getFirmedForm())
			throw AForm::FormNotSignedException();
		else if (executor.getGrade() > getGradeToExecute())
			throw AForm::GradeTooLowException();
		else {
			std::ofstream	outfile(getTarget() + "_shrubbery");
			if (outfile.is_open()) {
				outfile << "       . . .\n";
				outfile << "       .        .  .     ..    .\n";
				outfile << "    .                 .         .  .\n";
				outfile << "                    .\n";
				outfile << "                   .                ..\n";
				outfile << "   .          .            .              .\n";
				outfile << "   .            '.,        .               .\n";
				outfile << "   .              'b      *\n";
				outfile << "    .              '$    #.                ..\n";
				outfile << "   .    .           $:   #:               .\n";
				outfile << " ..      .  ..      *#  @|:        .   . .\n";
				outfile << "              .     :@,@|:   ,.**:'   .\n";
				outfile << "  .      .,         :@@*: ..**'      .   .\n";
				outfile << "           '#o.    .:(@'.@*\"'  .\n";
				outfile << "   .  .       'bq,..:,@@*'   ,*      .  .\n";
				outfile << "              ,p$q8,:@)'  .p*'      .\n";
				outfile << "       .     '  . '@@Pp@@*'    .  .\n";
				outfile << "        .  . ..    Y7'.'     .  .\n";
				outfile << "                  :@|:\n";
				outfile << "                 .:@:'.\n";
				outfile << "               .::|@:.      \n";
				outfile.close();
				std::cout << "Check the created file! " << std::endl;
			}
			else
				std::cout << "Error creating file" << std::endl;
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
