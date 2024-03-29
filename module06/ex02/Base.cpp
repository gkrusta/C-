#include "Base.hpp"

Base * generate(void) {
    std::srand(std::time(nullptr));
    int choice = std::rand() % 3;

    switch (choice) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
    }
    return (Base*)0;
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "Type is A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Type is B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Type is C" << std::endl;
    else
        std::cout << "Type not detected" << std::endl;
}

void identify(Base& p) {
    try {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "Type is A" << std::endl;
    }
    catch (std::exception &e)
    {
        try {
            B& b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "Type is B" << std::endl;
        }
        catch (std::exception &e)
        {
            try {
                C& c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "Type is C" << std::endl;
            }
            catch (std::exception &e) 
            {
                std::cout << "Type is not detected" << std::endl;
            }

        }
    }
}

Base::~Base() {
}