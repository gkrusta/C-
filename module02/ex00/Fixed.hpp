/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:48:59 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/06 17:00:04 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Fixed {
	public:
		Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_fixed;
		static const int	_bits; //ts value is constant and persists
		// throughout the lifetime of the program, can only be accessed within the same translation unit (i.e., the same source file)
}