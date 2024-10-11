/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:40:52 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 16:40:53 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type(DEFAULT_TYPE) {
	std::cout << "Animal was default constructed!" << std::endl;
}

AAnimal::AAnimal( const std::string& type) : _type(type) {
	std::cout << "Animal was constructed with type " << type << "!" << std::endl;
}

AAnimal::AAnimal( const AAnimal& other ) : _type(other.getType()) {
	std::cout << "Animal was copy constructed!" << std::endl;
}

AAnimal& AAnimal::operator=( const AAnimal& other ) {
	if (this != &other) {
		this->setType(other.getType());
	}
	std::cout << "A copy assignment operator overload called for Animal!" << std::endl;
	return *this;
}

AAnimal::~AAnimal( void ) {
	std::cout << "Animal was destroyed!" << std::endl;
}

std::string	AAnimal::getType( void ) const{
	return this->_type;
}

void	AAnimal::setType(const std::string& type) {
	this->_type = type;
}
