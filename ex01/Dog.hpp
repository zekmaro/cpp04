/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:40:19 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 16:40:20 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

# define DEFAULT_DOG_TYPE "Dog"

class Dog: public Animal {
	private:
		Brain *dogBrain;

	public:
		Dog( void );
		Dog( const Dog& other );
		Dog& operator=( const Dog& other );
		~Dog( void );

		void	makeSound( void ) const;
};

#endif // DOG_HPP