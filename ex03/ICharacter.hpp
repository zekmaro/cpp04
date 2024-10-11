/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:51:19 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 17:10:45 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>

# include "AMateria.hpp"

class ICharacter {
	public:
		virtual ~ICharacter() {}
		virtual std::string const& getName() const = 0;
		virtual void equip( AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use( int idx, ICharacter& target ) = 0;
};

#endif // ICHARACTER_HPP
