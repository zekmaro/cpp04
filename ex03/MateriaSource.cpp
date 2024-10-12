/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:36:04 by anarama           #+#    #+#             */
/*   Updated: 2024/10/12 14:56:19 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

MateriaSource::MateriaSource( void ) : IMateriaSource() {
	for (int i = 0; i < 4; i++) {
		this->_storedMaterias[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource& other ) : IMateriaSource(){
	for (int i = 0; i < 4; i++) {
		if (other._storedMaterias[i] != NULL) {
			this->_storedMaterias[i] = other._storedMaterias[i]->clone();
		} else {
			this->_storedMaterias[i] = NULL;
		}
	}
}

MateriaSource& MateriaSource::operator=( const MateriaSource& other ) {
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			delete _storedMaterias[i];
			if (other._storedMaterias[i] != NULL) {
				this->_storedMaterias[i] = other._storedMaterias[i]->clone();
			} else {
				this->_storedMaterias[i] = NULL;
			}
		}
	}
	return *this;
}

MateriaSource::~MateriaSource( void ) {
	for (int i = 0; i < 4; i++) {
        if (this->_storedMaterias[i] != NULL) {
            delete this->_storedMaterias[i];
        }
    }
}

void MateriaSource::learnMateria(AMateria *m) {
	if (m == NULL) {
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (this->_storedMaterias[i] == NULL) {
			this->_storedMaterias[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria( std::string const& type) {
	for (int i = 0; i < 4; i++) {
		if (this->_storedMaterias[i] != NULL && this->_storedMaterias[i]->getType() == type) {
			return this->_storedMaterias[i]->clone();
		}
	}
	return NULL;
}
