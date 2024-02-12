/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:45:57 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/12 13:50:19 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	_rawBits = 0;
}

Fixed::Fixed(const int nb) {
	_rawBits = nb << _fractionalBits;
}

Fixed::Fixed(float nb) {
	_rawBits = std::roundf(nb * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other) {
	this->_rawBits = other._rawBits;
}

Fixed::~Fixed(void) {

}

Fixed&	Fixed::operator=(const Fixed& other) {
	if (this != &other)
		this->_rawBits = other._rawBits;
	return (*this);
}

int	Fixed::getRawBits(void) const {
	return (_rawBits);
}

void	Fixed::setRawBits(int const raw) {
	_rawBits = raw;
}

int	Fixed::toInt(void) const {
	return (this->_rawBits >> _fractionalBits);
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(this->_rawBits) / (1 << _fractionalBits));
}

std::ostream	&operator<<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return (out);
}

bool	Fixed::operator>(const Fixed& other) const {
	return (this->_rawBits > other._rawBits);
}

bool	Fixed::operator<(const Fixed& other) const {
	return (this->_rawBits < other._rawBits);
}

bool	Fixed::operator<=(const Fixed& other) const {
	return !(this->_rawBits > other._rawBits);
}

bool	Fixed::operator>=(const Fixed& other) const {
	return !(this->_rawBits < other._rawBits);
}

bool	Fixed::operator==(const Fixed& other) const {
	return (this->_rawBits == other._rawBits);
}

bool	Fixed::operator!=(const Fixed& other) const {
	return (this->_rawBits != other._rawBits);
}

Fixed	Fixed::operator+(const Fixed& other) const {
	
	return (this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(const Fixed& other) const {
	return (this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(const Fixed& other) const {
	return (this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(const Fixed& other) const {
	return (this->toFloat() / other.toFloat());
}

Fixed&	Fixed::operator++() {
	++this->_rawBits;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	++this->_rawBits;
	return (tmp);
}

Fixed&	Fixed::operator--() {
	--this->_rawBits;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);
	--this->_rawBits;
	return (tmp);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	return (a.getRawBits() < b.getRawBits() ? a : b);
} 

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {
	return (a.getRawBits() > b.getRawBits() ? a : b);
}
