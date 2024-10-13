/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:39:07 by anarama           #+#    #+#             */
/*   Updated: 2024/10/13 20:53:58 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

# define DEFAULT_TYPE "default"

class ICharacter;

class AMateria {
	protected:
		std::string const _type;

	public:
		AMateria( void );
		AMateria( std::string const& type );
		AMateria( const AMateria& other );
		AMateria& operator=(const AMateria& other );
		virtual ~AMateria( void );

		std::string const& getType( void ) const;
		
		virtual AMateria* clone( void ) const = 0;
		virtual void use(ICharacter& target);
};

#endif // AMATERIA_HPP