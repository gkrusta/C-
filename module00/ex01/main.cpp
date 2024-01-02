/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:18:41 by gkrusta           #+#    #+#             */
/*   Updated: 2024/01/02 18:08:37 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


int	main()
{
	std::string input;
	PhoneBook	book;

	std::getline(std::cin, input);
	//std::cout << input << std::endl;
	while (1)
	{
		if(input == "ADD")
			book.addContact();
		else if (input == "SEARCH")
			book.searchContact();
		else
			std::cout << "Wrong option. Try again!" << std::endl;
	}
	return (0);
/* 	for (int i = 0; i < 7; i++)
		std::cout << std::setw(10); */
}