/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:53:50 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 20:16:50 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice( void ) : AMateria("ice") {
	std::cout << "Ice was default constructed!" << std::endl;
}

Ice::Ice( std::string const& type ) : AMateria(type) {
	std::cout << "Ice was constructed with type!" << std::endl;
}

Ice::Ice( const Ice& other ) {
	this->_type = other.getType();
	std::cout << "Ice was copy constructed!" << std::endl;
}

Ice& Ice::operator=(const Ice& other ) {
	if (this != &other) {
		this->_type = other.getType();
	}
	std::cout << "Assignment operator overload for Ice!" << std::endl;
	return *this;
}

Ice::~Ice( void ) {
	std::cout << "Ice was destroyed!" << std::endl;
}

AMateria* Ice::clone( void ) const {
	return new Ice(this->_type);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at <name> *" << std::endl;
}