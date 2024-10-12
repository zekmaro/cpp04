/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:32:33 by anarama           #+#    #+#             */
/*   Updated: 2024/10/12 12:51:35 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
	public: 
		Cure( void );
		Cure( const Cure& other );
		Cure& operator=( const Cure& other );
		~Cure( void );

		AMateria*	clone( void ) const;
		void		use(ICharacter& target);
};

#endif // CURE_HPP