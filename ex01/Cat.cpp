#include <iostream>

#include "Cat.hpp"

Cat::Cat( void ) : Animal(DEFAULT_CAT_TYPE) {
	this->catBrain = new Brain();
	std::cout << "Cat was default constructed!" << std::endl;
}

Cat::Cat( const Cat& other ) : Animal(other.getType()) {
	this->catBrain = new Brain();
	std::cout << "Cat was copy constructed!" << std::endl;
}

Cat& Cat::operator=( const Cat& other ) {
	if (this != &other) {
		this->setType(other.getType());
	}
	std::cout << "A copy assignment operator overload called for Cat!" << std::endl;
	return *this;
}

Cat::~Cat( void ) {
	delete[] this->catBrain;
	std::cout << "Cat was destroyed!" << std::endl;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow (mrrrrr)" << std::endl;
}