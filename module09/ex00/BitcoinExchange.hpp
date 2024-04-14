#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <sstream>
# include <map>
# include <string>
# include <cstdlib>

class	BitcoinExchange {
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		bool	LoadExchangeRate(const std::string& fileName);
	private:
		std::map<std::string, float> _exchangeRate;
};

#endif