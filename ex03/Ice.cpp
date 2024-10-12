/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:53:50 by anarama           #+#    #+#             */
/*   Updated: 2024/10/12 13:28:41 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice( void ) : AMateria("ice") {
	std::cout << "Ice was default constructed!" << std::endl;
}

Ice::Ice( const Ice& other ) : AMateria("ice") {
	(void) other;
	std::cout << "Ice was copy constructed!" << std::endl;
}

Ice& Ice::operator=(const Ice& other ) {
	(void) other;
	std::cout << "Assignment operator overload for Ice!" << std::endl;
	return *this;
}

Ice::~Ice( void ) {
	std::cout << "Ice was destroyed!" << std::endl;
}

AMateria* Ice::clone( void ) const {
	return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}