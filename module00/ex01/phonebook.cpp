/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:56:16 by gkrusta           #+#    #+#             */
/*   Updated: 2023/12/20 17:05:46 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

// getters
void	phoneBook::addContact()
{
	if (book.nr_contacts < 8)
	{
		for (int i = 0; i < 5; i++) {
			std::getline(std::cin, input);
			setFirstName()
		}
	}
	else
		delete_oldest(book._contact[0]);
}
