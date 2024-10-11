/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:02:27 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 21:51:01 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
# include "ICharacter.hpp"

# define DEFAULT_CHARACTER_NAME "default_character_name"

class Character : public ICharacter {
	private:
		AMateria* _inventory[4];
		AMateria* _unequiped[10];
		std::string _name;
	
	public:
		Character( void );
		Character( const std::string& name );
		Character( const Character& other );
		Character& operator=( const Character& other );
		~Character( void );

		std::string const&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif // CHARACTER_HPP