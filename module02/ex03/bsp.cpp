/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:52:03 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/09 18:12:41 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* bool	barycentricCoordinates(Point const a, Point const b, Point const c, Point const p) {
	// weight or proportion of the distance of P from vertex A
	float	u = (b.getY() - c.getY())*(p.getX() - c.getX()) - (c.getX() - b.getX()) * (p.getY() - c.getY()) /
				(b.getY() - c.getY())*(a.getX() - c.getX()) - (c.getX() - b.getX()) * (a.getY() - c.getY());

	// weight or proportion of the distance of P from vertex B
	float	v = (c.getY() - a.getY())*(p.getX() - c.getX()) - (a.getX() - c.getX()) * (p.getY() - c.getY()) /
				(b.getY() - c.getY())*(a.getX() - c.getX()) - (c.getX() - b.getX()) * (a.getY() - c.getY());

	// weight or proportion of the distance of P from vertex C
	float	w = 1 - u - w;

	return (w >= 0.0 && w <= 1.1) ? true : false;
} */

bool	bsp(Point const a, Point const b, Point const c, Point const p) {
	// weight or proportion of the distance of P from vertex A
	Fixed	u = ((b.getY() - c.getY())*(p.getX() - c.getX()) - (c.getX() - b.getX()) * (p.getY() - c.getY())) /
				((b.getY() - c.getY())*(a.getX() - c.getX()) - (c.getX() - b.getX()) * (a.getY() - c.getY()));

	// weight or proportion of the distance of P from vertex B
	Fixed	v = ((c.getY() - a.getY())*(p.getX() - c.getX()) - (a.getX() - c.getX()) * (p.getY() - c.getY())) /
				((b.getY() - c.getY())*(a.getX() - c.getX()) - (c.getX() - b.getX()) * (a.getY() - c.getY()));

	// weight or proportion of the distance of P from vertex C
	Fixed	whole(1);
	Fixed	w = whole - u - v;

	return (w.toFloat() >= 0.0 && w.toFloat() <= 1.0) ? true : false;
}
