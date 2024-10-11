/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:58:32 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 20:16:38 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure( void ) : AMateria("ice") {
	std::cout << "Cure was default constructed!" << std::endl;
}

Cure::Cure( std::string const& type ) : AMateria(type) {
	std::cout << "Cure was constructed with type!" << std::endl;
}

Cure::Cure( const Cure& other ) {
	this->_type = other.getType();
	std::cout << "Cure was copy constructed!" << std::endl;
}

Cure& Cure::operator=(const Cure& other ) {
	if (this != &other) {
		this->_type = other.getType();
	}
	std::cout << "Assignment operator overload for Cure!" << std::endl;
	return *this;
}

Cure::~Cure( void ) {
	std::cout << "Cure was destroyed!" << std::endl;
}

AMateria*	Cure::clone( void ) const {
	return new Cure(this->_type);
}

void		Cure::use(ICharacter& target) {
	std::cout << "* heals <name>’s wounds *" << std::endl;
}
