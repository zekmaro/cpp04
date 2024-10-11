/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:41:25 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 16:41:26 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

# define DEFAULT_DOG_TYPE "Dog"

class Dog: public AAnimal {
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