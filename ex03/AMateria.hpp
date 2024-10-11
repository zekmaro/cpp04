/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:39:07 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 20:00:41 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

# include "ICharacter.hpp"

# define DEFAULT_TYPE "default"

class AMateria {
	protected:
		std::string _type;

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