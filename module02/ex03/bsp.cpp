/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:52:03 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/12 13:10:58 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	getArea(Point const a, Point const b, Point const c) {
	Fixed	a_x = a.getX();
	Fixed	a_y = a.getY();
	Fixed	b_x = b.getX();
	Fixed	b_y = b.getY();
	Fixed	c_x = c.getX();
	Fixed	c_y = c.getY();

	Fixed	area = (a_x * (b_y - c_y) + (b_x * (c_y - a_y)) + (c_x * (a_y - b_y))) / 2;
	
	return (area.toAbs());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	abc = getArea(a, b, c);
	Fixed	apc = getArea(a, point, c);
	Fixed	apb = getArea(a, point, b);
	Fixed	bpc = getArea(b, point, c);

	return (abc == apc + apb + bpc) ? true : false;
}
