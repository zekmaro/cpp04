/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:39:10 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 16:39:11 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"

Animal::Animal( void ) : _type(DEFAULT_TYPE) {
	std::cout << "Animal was default constructed!" << std::endl;
}

Animal::Animal( const std::string& type) : _type(type) {
	std::cout << "Animal was constructed with type " << type << "!" << std::endl;
}

Animal::Animal( const Animal& other ) : _type(other.getType()) {
	std::cout << "Animal was copy constructed!" << std::endl;
}

Animal& Animal::operator=( const Animal& other ) {
	if (this != &other) {
		this->setType(other.getType());
	}
	std::cout << "A copy assignment operator overload called for Animal!" << std::endl;
	return *this;
}

Animal::~Animal( void ) {
	std::cout << "Animal was destroyed!" << std::endl;
}

void	Animal::makeSound( void ) const {
	std::cout << "Animal doesnt have a specific sound!" << std::endl;
}

std::string	Animal::getType( void ) const{
	return this->_type;
}

void	Animal::setType(const std::string& type) {
	this->_type = type;
}
