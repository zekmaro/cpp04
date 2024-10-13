/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:39:49 by anarama           #+#    #+#             */
/*   Updated: 2024/10/13 20:46:41 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain was default constructed!" << std::endl;
}

Brain::Brain( const Brain& other ) {
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = other._ideas[i];
	}
}

Brain& Brain::operator=( const Brain& other ) {
	if (this != &other) {
        for (int i = 0; i < 100; i++) {
            this->_ideas[i] = other._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain( void ) {
	std::cout << "Brain was destroyed!" << std::endl;
}

std::string Brain::getIdea( int index ) const {
	if (index >= 0 && index < 100)
		return this->_ideas[index];
	std::cout << "Index out of range in getIdea!" << std::endl;
	return "";
}

void Brain::setIdea( int index, const std::string& idea) {
	if (index >= 0 && index < 100) {
		this->_ideas[index] = idea;
	}
	else {
		std::cout << "Index out of range in setIdea!" << std::endl;
	}
}
