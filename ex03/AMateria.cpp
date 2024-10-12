/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:51:01 by anarama           #+#    #+#             */
/*   Updated: 2024/10/12 13:25:19 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria( void ) : _type(DEFAULT_TYPE) {
	std::cout << "AMateria was default constructed!" << std::endl;
}

AMateria::AMateria( std::string const& type ) : _type(type) {
	std::cout << "AMateria was constructed with type!" << std::endl;
}

AMateria::AMateria( const AMateria& other ) {
	(void) other;
	std::cout << "AMateria was copy constructed!" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other ) {
	(void) other;
	std::cout << "Assignment operator overload for AMateria!" << std::endl;
	return *this;
}

AMateria::~AMateria( void ) {
	std::cout << "AMateria was destroyed!" << std::endl;
}

std::string const& AMateria::getType( void ) const {
	return this->_type;
}

void AMateria::use(ICharacter& target) {(void) target;}