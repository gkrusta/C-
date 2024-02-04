/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:19:14 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/04 16:23:37 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ifstream>
#include <ofstream>
#include <iostream>

int	main(int argc, char **argv) {
	if (argc = 4) {
		std::string	_infileName = argv[1];
		std::ifstream	_infile(argv[1]);
		if (infile.open("infile.txt", std::ifstream::in) == NULL)
			std::cout << "Can't open the file" << std::endl;
		std::string _outfileName = _infileName + ".replace";
		char	*s1 = argv[2]; // replace this
		char	*s2 = argv[3]; // with this
		std::string	line;
		int	pos = 0;
		while (std::getline(_infile, line, '\n')) {
			while (line[pos] != '\n')
			{
				if ()
			}
			pos += s2;
		}
		std::ofstream	_outfile(_outfileName);
		_infile.close();
		_outfile.close();
	}
	else
		std::cout << "Program takes 3 parameters in the following order: a filename and
			2 strings, s1 and s2." << std::endl;
	return (0);
}