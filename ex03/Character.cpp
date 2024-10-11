/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:22:51 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 23:06:18 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character( void ) : _name(name) {
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
		delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}
	for (int i = 0; i < 10; i++) {
		delete this->_inventory[i];
		this->_unequiped[i] = NULL;
	}
}

std::string const&	Character::getName() const {
	return this->_name;
}

void	Character::equip(AMateria* m) {
	int i = 0;
	while (this->_inventory[i] != NULL) {
		i++;
	}
	this->_inventory[i] = m->clone();
}

void	Character::unequip(int idx) {
	for (int i = 0; i < 10; i++) {
		if (this->_unequiped[i] == NULL) {
			break ;
		}
	}
	int uneqIndx = i;
	AMateria* temp = this->_inventory[idx];
	this->_inventory[idx] = NULL;
	this->_unequiped[uneqIndx] = temp;
}

void Character::use(int idx, ICharacter& target) {
	this->_inventory[idx].use(target);
}
