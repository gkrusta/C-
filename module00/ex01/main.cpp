/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:18:41 by gkrusta           #+#    #+#             */
/*   Updated: 2023/12/20 16:38:24 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	std::string input;
	phoneBook	book;

	std::cout << "Welcome to Phonebook" << std::endl;
	std::cout << "Chose 1 of the options: 1.ADD  2.SEARCH  3.EXIT" << std::endl;
	std::getline(std::cin, input);
	std::cout << input << std::endl;
	while (1)
	{
		if(input == "ADD")
		{
			book.addContact();
		}
		else
			return (0);
	}
	return (0);
/* 	for (int i = 0; i < 7; i++)
		std::cout << std::setw(10); */
}