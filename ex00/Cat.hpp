/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:39:20 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 16:39:27 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

# define DEFAULT_CAT_TYPE "Cat"

class Cat: public Animal {
	public:
		Cat( void );
		Cat( const Cat& other );
		Cat& operator=( const Cat& other );
		~Cat( void );

		void	makeSound( void ) const;
};

#endif // CAT_HPP