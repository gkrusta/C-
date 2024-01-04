/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:39:32 by gkrusta           #+#    #+#             */
/*   Updated: 2024/01/04 17:30:28 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

static int		_nbAccounts = 0;
static int		_totalAmount = 0;
static int		_totalNbDeposits = 0;
static int		_totalNbWithdrawals = 0;

t::Account(int initial_deposit) {
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	std::cout << "index: " << getNbAccounts() << ";amount:" << checkAmount() << ";created" << std::endl;
	_nbAccounts++;
}

int	t::getNbAccounts(void) {
	return (_nbAccounts);
}

int	t::getTotalAmount(void) {
	return (_totalAmount);
}

int	t::getNbDeposits(void) {
	return (_totalNbDeposits);
}

int	t::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

int	t::checkAmount(void) const {
	return (_amount);
}

void	makeDeposit( int deposit ) {
	_totalNbDeposits++;
	
}
//here :)
bool	makeWithdrawal( int withdrawal ) {
	if (withdrawal > _amount.checkAmount)
		return false;
	else {
		
		_totalNbWithdrawals++;
		return true;
	}
}

void	t::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts.getNbAccounts() << ";" <<
}

void	t::_displayTimestamp( void ) {
	
}
