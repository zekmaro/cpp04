/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:36:01 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 23:57:56 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"

class MateriaSource: public IMateriaSource {
	private:
		AMateria *_source_materias[4];

	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource& other );
		MateriaSource& operator=( const MateriaSource& other );
		~MateriaSource( void );

		void learnMateria(AMateria *m);
		AMateria* createMateria( std::string const& type);
}

#endif // MATERIASOURCE_HPP