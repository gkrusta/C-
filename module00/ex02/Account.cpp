/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:39:32 by gkrusta           #+#    #+#             */
/*   Updated: 2024/01/05 18:45:14 by gkrusta          ###   ########.fr       */
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
	_nbDeposits = 0;
	_NbWithdrawals = 0;
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

void	displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";deposits:";
	std::cout << _nbDeposits << ";withdrawals:" << _NbWithdrawals << std::endl;
}

void	makeDeposit(int deposit) {
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() << ";deposit:";
	_amount += deposit;
	std::cout << deposit << ";amount:" << checkAmount() << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() << ";withdrawal:";
	if (withdrawal > _amount.checkAmount()) {
		std::cout << "refused" << std::endl;
		return false;
	}
	else {
		_totalNbWithdrawals++;
		_amount -= withdrawal;
		std::cout << withdrawal << ";amount:" << checkAmount() << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
}

static void	t::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts.getNbAccounts() << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	t::_displayTimestamp( void ) {
	
}
