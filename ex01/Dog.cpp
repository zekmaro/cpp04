#include <iostream>

#include "Dog.hpp"

Dog::Dog( void ) : Animal(DEFAULT_DOG_TYPE) {
	this->dogBrain = new Brain();
	std::cout << "Dog was default constructed!" << std::endl;
}

Dog::Dog( const Dog& other ) : Animal(other.getType()) {
	this->dogBrain = new Brain(*other.dogBrain);
	std::cout << "Dog was copy constructed!" << std::endl;
}

Dog& Dog::operator=( const Dog& other ) {
	if (this != &other) {
		this->setType(other.getType()); 
		delete this->dogBrain;
		this->dogBrain = new Brain(*other.dogBrain);
	}
	std::cout << "A copy assignment operator overload called for Dog!" << std::endl;
	return *this;
}

Dog::~Dog( void ) {
	delete this->dogBrain;
	std::cout << "Dog was destroyed!" << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "BARK! BARK!" << std::endl;
}
