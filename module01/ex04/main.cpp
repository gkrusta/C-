/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:19:14 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/05 13:09:41 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

void replaceInLine(std::string& line, std::string s1, std::string s2) {
	std::size_t found = line.find(s1);

	while (found != std::string::npos) {
		line.erase(found, s1.length());
		line.insert(found, s2);
		found = line.find(s1, found + s2.length());
	}
}

int	main(int argc, char **argv) {
	if (argc == 4) {
		std::string	infileName = argv[1];
		std::ifstream	infile(infileName);

		if (!infile.is_open()) {
			std::cout << "Can't open the file" << std::endl;
			return (1);
		}

		std::string	s1 = argv[2]; // replace this
		std::string s2 = argv[3]; // with this
		std::string	line;
		std::ofstream	outfile(infileName + ".replace");

		while (std::getline(infile, line, '\n')) {
			replaceInLine(line, s1, s2);
			outfile << line << std::endl;
		}
		infile.close();
		outfile.close();
	}
	else
		std::cout << "Program takes 3 parameters in the following order: a filename and 2 strings, s1 and s2." << std::endl;
	return (0);
}