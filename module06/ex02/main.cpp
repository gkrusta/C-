#include "Base.hpp"

int	main(void) {
    Base	*type = generate();
	
	identify(type);
	identify(*type);

	delete type;
	return (0);
}