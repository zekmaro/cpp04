/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:22:51 by anarama           #+#    #+#             */
/*   Updated: 2024/10/12 13:25:48 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character( void ) {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	for (int i = 0; i < 10; i++) {
		this->_unequiped[i] = NULL;
	}
	std::cout << "Character was default constructed!" << std::endl;
}

Character::Character( const std::string& name ) : _name(name) {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	for (int i = 0; i < 10; i++) {
		this->_unequiped[i] = NULL;
	}
	std::cout << "Character was default constructed!" << std::endl;
}

Character::Character( const Character& other ) {
	for (int i = 0; i < 4; i++) {
		if (other._inventory[i]) {
			this->_inventory[i] = other._inventory[i]->clone();
		} else {
			this->_inventory[i] = NULL;
		}
	}
	for (int i = 0; i < 10; i++) {
		this->_unequiped[i] = NULL;
	}
}

Character& Character::operator=( const Character& other ) {
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}

		for (int i = 0; i < 4; i++) {
			if (other._inventory[i]) {
				this->_inventory[i] = other._inventory[i]->clone();
			} else {
				this->_inventory[i] = NULL;
			}
		}
	}
	return *this;
}

Character::~Character( void ) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
	for (int i = 0; i < 10; i++) {
		if (this->_unequiped[i] != NULL) {
			delete this->_unequiped[i];
			this->_unequiped[i] = NULL;			
		}
	}
}

std::string const&	Character::getName() const {
	return this->_name;
}

void	Character::equip(AMateria* m) {
	int i = 0;
	while (i < 4 && this->_inventory[i] != NULL) {
		i++;
	}
	if (i < 4) {
		this->_inventory[i] = m;	
	}
}

void	Character::unequip(int idx) {
	int i = 0;
	while (i < 10 && this->_unequiped[i] != NULL) {
		i++;
	}
	if (i < 10 && (idx >= 0 && idx < 4)) {
		AMateria* temp = this->_inventory[idx];
		this->_inventory[idx] = NULL;
		this->_unequiped[i] = temp;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4) {
		this->_inventory[idx]->use(target);
	}
}
