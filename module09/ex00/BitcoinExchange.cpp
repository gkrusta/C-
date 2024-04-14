#include "BitcoinExchange"

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

bool	BitcoinExchange::LoadExchangeRate(const std::string& fileName) {
	std::ifstream	file(fileName);
	std::string	line;
	bool firstLine = true;

	if (!file.is_open())
		return false;
	
	while (std::getline(file, line)) {
		std::istringstream	iss;
		std::string	date, exchange_rate;

		if (firstLine) {
			firstLine = false;
			continue;
		}
		if (std::getline(iss, date, ",") && std::getline(iss, exchange_rate))
			_exchangeRate[date] = exchange_rate;
		else
			return false;
	}
	file.close();
	return true;
}