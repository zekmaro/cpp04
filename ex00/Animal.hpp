/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:39:13 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 16:39:14 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

# define DEFAULT_TYPE "default_type"

class Animal {
	protected:
		std::string _type;

	public:
		Animal( void );
		Animal( const std::string& type);
		Animal( const Animal& other );
		Animal& operator=( const Animal& other );
		virtual ~Animal( void );

		std::string		getType( void ) const;
		void			setType(const std::string& type);

		virtual void	makeSound( void ) const;
};

#endif // ANIMAN_HPP