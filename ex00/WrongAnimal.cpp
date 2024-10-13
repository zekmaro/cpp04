/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:39:10 by anarama           #+#    #+#             */
/*   Updated: 2024/10/13 20:41:24 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type(DEFAULT_WRONG_TYPE) {
	std::cout << "WrongAnimal was default constructed!" << std::endl;
}

WrongAnimal::WrongAnimal( const std::string& type) : _type(type) {
	std::cout << "WrongAnimal was constructed with type " << type << "!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) : _type(other.getType()) {
	std::cout << "WrongAnimal was copy constructed!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other ) {
	if (this != &other) {
		this->setType(other.getType());
	}
	std::cout << "A copy assignment operator overload called for WrongAnimal!" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal was destroyed!" << std::endl;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "< Sounds of the Wrong animal? wtf.. >" << std::endl;
}

std::string	WrongAnimal::getType( void ) const{
	return this->_type;
}

void	WrongAnimal::setType(const std::string& type) {
	this->_type = type;
}
