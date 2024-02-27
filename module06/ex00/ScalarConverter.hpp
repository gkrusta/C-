/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:14:54 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/27 16:24:43 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>
# include <ctype.h>
# include <stdlib.h>
#include <string>
#include <sstream>
#include <iomanip>

class	ScalarConverter {
	public:
		static void convert(const std::string& str);
		~ScalarConverter();
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
};

#endif  