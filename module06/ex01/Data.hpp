/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:19:19 by gkrusta           #+#    #+#             */
/*   Updated: 2024/02/28 11:03:56 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class	Data {
	public:
		Data();
		Data(int nb);
		~Data();
		Data(const Data& other);
		Data&	operator=(const Data& other);
		void	displayData(void);

	private:
		int	_nb;
};

#endif