#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	std::cout << "BitcoinExchange default constructor called" <<  std::endl;
}

BitcoinExchange::~BitcoinExchange() {
	std::cout << "BitcoinExchange destructor called" <<  std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
	_exchangeRate = other._exchangeRate;
	std::cout << "BitcoinExchange copy constructor called" <<  std::endl;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
	if (this != &other)
		_exchangeRate = other._exchangeRate;
	std::cout << "BitcoinExchange copy assignment operator called" << std::endl;
	return *this;
}

void	BitcoinExchange::getExcahngeRate(std::string date, float value) {
	std::string	closestDate = "";
	float		currency;
	std::map<std::string, float>::iterator it = _exchangeRate.find(date);

	if (it != _exchangeRate.end())
		currency = it->second;
	else {
		it = _exchangeRate.upper_bound(date);
		if (it != _exchangeRate.begin())
			--it;
		currency = it->second;
	}
	std::ostringstream	stream1, stream2;
	float result = currency * value;
	stream1 << result;
	stream2 << value;
	std::cout << date << " => " << value << " = " << result << std::endl;

}

bool	BitcoinExchange::LoadExchangeRate(const std::string& fileName) {
	std::ifstream	file(fileName);
	std::string	line;
	bool firstLine = true;

	if (!file.is_open())
		return false;
	
	while (std::getline(file, line)) {
		std::istringstream	iss(line);
		std::string	date, exchange_rate;
		if (firstLine) {
			firstLine = false;
			continue;
		}
		if (std::getline(iss, date, ',') && std::getline(iss, exchange_rate))
			_exchangeRate[date] = atof(exchange_rate.c_str());
		else
			return false;
	}
	file.close();
	return true;
}