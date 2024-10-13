/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:39:17 by anarama           #+#    #+#             */
/*   Updated: 2024/10/13 20:40:50 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal(DEFAULT_WRONG_CAT_TYPE) {
	std::cout << "WrongCat was default constructed!" << std::endl;
}

WrongCat::WrongCat( const WrongCat& other ) : WrongAnimal(other.getType()) {
	std::cout << "WrongCat was copy constructed!" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& other ) {
	if (this != &other) {
		this->setType(other.getType());
	}
	std::cout << "A copy assignment operator overload called for WrongCat!" << std::endl;
	return *this;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat was destroyed!" << std::endl;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "< Sounds of the wrong cat... >" << std::endl;
}
