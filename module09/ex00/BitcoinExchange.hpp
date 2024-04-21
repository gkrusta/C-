#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <sstream>
# include <map>
# include <string>
# include <cstdlib>
# include <stdio.h>
# include <fstream>

class	BitcoinExchange {
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		bool	LoadExchangeRate(const std::string& fileName);
		void	getExcahngeRate(std::string date, float &value);
	private:
		std::map<std::string, float> _exchangeRate;
};

#endif