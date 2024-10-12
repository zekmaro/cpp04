/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:58:32 by anarama           #+#    #+#             */
/*   Updated: 2024/10/12 13:27:56 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure( void ) : AMateria("cure") {
	std::cout << "Cure was default constructed!" << std::endl;
}

Cure::Cure( const Cure& other ) : AMateria("cure") {
	(void) other;
	std::cout << "Cure was copy constructed!" << std::endl;
}

Cure& Cure::operator=(const Cure& other ) {
	(void) other;
	std::cout << "Assignment operator overload for Cure!" << std::endl;
	return *this;
}

Cure::~Cure( void ) {
	std::cout << "Cure was destroyed!" << std::endl;
}

AMateria* Cure::clone( void ) const {
	return new Cure();
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals "<< target.getName() <<"’s wounds *" << std::endl;
}
