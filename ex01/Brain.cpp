/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:39:49 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 16:39:53 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain was default constructed!" << std::endl;
}

Brain::Brain( const Brain& other) {
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
	if (index >= 0 && index < 20)
		return this->_ideas[index];
	return "";
}

void Brain::setIdea( int index, const std::string& idea) {
	if (index >= 0 && index < 20) {
		this->_ideas[index] = idea;
	}
}
