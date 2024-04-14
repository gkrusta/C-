/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:14:57 by gkrusta           #+#    #+#             */
/*   Updated: 2024/04/10 17:37:20 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
	(void)other;
}

ScalarConverter::~ScalarConverter() {

}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& other) {
	(void)other;
	return (*this);
}

void	ScalarConverter::convert(const std::string& str) {
	char	c = 0;
	int		i = 0;
	double	d = 0;
	float	f = 0;
	bool	isDisplayable = true;
	std::string	specType[] = {"nan", "+inf", "-inf", "nanf", "+inff", "-inff"};

	if (str.length() == 1 && isprint(str[0]) && !isdigit(str[0]))
		c = str[0];
	else if ((isprint(str[0]) && !isdigit(str[0]) && isprint(str[1]) &&
		str != "nan" && str != "+inf" && str != "-inf" && 
			str != "nanf" && str != "+inff" && str != "-inff") || str == "") {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
		return;
	}
	else if (str[str.length() - 1] == 'f' && str.find('.') != std::string::npos)
		f = std::stof(str.c_str());
	else if (str.find('.') != std::string::npos)
		d = std::stof(str.c_str());
	else
		i = std::atoi(str.c_str());
	int	iter = -1;
	while (++iter < 5) {
		if (specType[iter] == str){
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			if (iter >= 0 && iter <= 2) {
				std::cout << "double: " << str << std::endl;
				std::cout << "float: " << str + 'f' << std::endl;
			}
			else {
				std::cout << "double: " << str.substr(0, (str.length() - 1)) << std::endl; // removes the last character
				std::cout << "float: " << str << std::endl;
			}
			return;
		}
	}
	if (str.length() == 1 && isprint(str[0]) && !isdigit(str[0])) {
		i = static_cast<int>(str[0]);
		d = static_cast<double>(i);
		f = static_cast<float>(i);
	}
	else if (f != 0 || d != 0) {
		if (f != 0) {
			i = static_cast<int>(f);
			d = static_cast<double>(f);
		}
		else if (d != 0) {
			f = static_cast<float>(d);
			i = static_cast<int>(d);
		}
		if (i > 31 && i < 127)
			c = static_cast<char>(i);
		else
			isDisplayable = false;
	}
	else {
		d = static_cast<double>(i);
		f = static_cast<float>(i);
		if (i > 31 && i < 127)
			c = static_cast<char>(i);
		else
			isDisplayable = false;
	}
	if (!isDisplayable)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	
	std::stringstream ss;
	ss << std::fixed << std::setprecision(7) << d; ; // Convert double to string
	if (ss.str().find('.') != std::string::npos) {
		std::cout << "double: " << ss.str() << std::endl;
		std::cout << "float: " << ss.str() << "f"<< std::endl;
	} else {
		std::cout << "double: " << ss.str() << ".0" << std::endl;
		std::cout << "float: " << ss.str() << ".0f"<< std::endl;
	}
}
