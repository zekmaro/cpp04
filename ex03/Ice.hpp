/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:32:39 by anarama           #+#    #+#             */
/*   Updated: 2024/10/12 12:52:53 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {
	public: 
		Ice( void );
		Ice( const Ice& other );
		Ice& operator=( const Ice& other );
		~Ice( void );

		AMateria*	clone( void ) const;
		void		use(ICharacter& target);
};

#endif // ICE_HPP