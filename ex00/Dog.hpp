/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:39:34 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 16:39:35 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

# define DEFAULT_DOG_TYPE "Dog"

class Dog: public Animal {
	public:
		Dog( void );
		Dog( const Dog& other );
		Dog& operator=( const Dog& other );
		~Dog( void );

		void	makeSound( void ) const;
};

#endif // DOG_HPP