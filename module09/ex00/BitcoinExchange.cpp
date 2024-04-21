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

void	BitcoinExchange::getExcahngeRate(std::string date, float &value) {
	float result;
	std::map<std::string, float>::iterator it = _exchangeRate.find(date);

	if (it != _exchangeRate.end())
		result = it->second * value;
	else
		result = value;
	std::cout << date << " => " << value << " = " << //result << std::endl;

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