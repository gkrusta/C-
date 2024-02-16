/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:41:28 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/16 19:34:31 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" <<  std::endl;
}

Brain::Brain(const Brain& other) {
	_idea[_ideaCount]
	std::cout << "Brain copy constructor called" <<  std::endl;
}

Brain& Brain::operator=(const Brain& other) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	return *this;
}

Brain::setIdea(std::string idea) {
	_idea[_ideaCount] = idea;
	_ideaCount++;
}

Brain::printIdeas() {
	for (int i = 0; i < _ideaCount; i++) {
		std::cout << _ideas[i] << std::endl;
	}
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}
