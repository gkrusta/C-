/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:18:41 by gkrusta           #+#    #+#             */
/*   Updated: 2024/01/03 18:55:14 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string input;
	PhoneBook	book;

	while (1)
	{
		std::cout << "Chose 1 of the options: 1.ADD  2.SEARCH  3.EXIT" << std::endl;
		//std::cout << "input is " << input << std::endl;
		std::cin >> input;
		if (input == "ADD")
			book.addContact();
		else if (input == "SEARCH")
			book.searchContact();
		else if (input == "EXIT")
			return (0);
		else
			std::cout << "Wrong option. Try again!" << std::endl;
	}
	return (0);
}
