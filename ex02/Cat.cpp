/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:41:11 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 16:41:12 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void ) : AAnimal(DEFAULT_CAT_TYPE) {
	this->catBrain = new Brain();
	std::cout << "Cat was default constructed!" << std::endl;
}

Cat::Cat( const Cat& other ) : AAnimal(other.getType()) {
	this->catBrain = new Brain(*other.catBrain);
	std::cout << "Cat was copy constructed!" << std::endl;
}

Cat& Cat::operator=( const Cat& other ) {
	if (this != &other) {
		this->setType(other.getType()); 
		delete this->catBrain;
		this->catBrain = new Brain(*other.catBrain);
	}
	std::cout << "A copy assignment operator overload called for Cat!" << std::endl;
	return *this;
}

Cat::~Cat( void ) {
	delete this->catBrain;
	std::cout << "Cat was destroyed!" << std::endl;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow (mrrrrr)" << std::endl;
}