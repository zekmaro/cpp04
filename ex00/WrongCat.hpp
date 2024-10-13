/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:39:13 by anarama           #+#    #+#             */
/*   Updated: 2024/10/13 20:39:59 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>

# include "WrongAnimal.hpp"

# define DEFAULT_WRONG_CAT_TYPE "Cat"

class WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat( const WrongCat& other );
		WrongCat& operator=( const WrongCat& other );
		~WrongCat( void );

		std::string		getType( void ) const;
		void			setType(const std::string& type );

		void			makeSound( void ) const;
};

#endif // WRONGCAT_HPP