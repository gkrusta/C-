/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:41:28 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/19 12:14:08 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	_ideaCount = 0;
	std::cout << "Brain default constructor called" <<  std::endl;
}

Brain::Brain(const Brain& other) {
	for (int i = 0; i < other._ideaCount; i++) 
		_ideas[i] = other._ideas[i];
	_ideaCount = other._ideaCount;
	std::cout << "Brain copy constructor called" <<  std::endl;
}

Brain& Brain::operator=(const Brain& other) {
	for (int i = 0; i < other._ideaCount; i++)
		_ideas[i] = other._ideas[i];
	_ideaCount = other._ideaCount;
	std::cout << "Brain copy assignment operator called" << std::endl;
	return *this;
}

void	Brain::setIdea(std::string idea) {
	if (_ideaCount < 100)
		_ideas[_ideaCount++] = idea;
	else
		std::cout << "Brain already stores 100 ideas!" << std::endl;
}

std::string	Brain::getIdea(int i) {
	return(_ideas[i]);
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}
