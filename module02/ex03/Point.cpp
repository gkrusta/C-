/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:30:35 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/12 12:14:44 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {

}

Point::Point(const float xValue, const float yValue) : _x(xValue), _y(yValue) {

}

Point::Point(const Point& other) : _x(other._x), _y(other._y) {

}

Point& Point::operator=(const Point& other) {
	if (this != &other) {
		(Fixed)this->_x = (Fixed)other._x;
		(Fixed)this->_y = (Fixed)other._y;
	}
	return *this;
}

Point::~Point() {
	
}

Fixed	Point::getX() const {
	return (this->_x);
}

Fixed	Point::getY() const {
	return (this->_y);
}