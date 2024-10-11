/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:40:54 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 16:40:55 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

# define DEFAULT_TYPE "default_type"

class AAnimal {
	protected:
		std::string _type;

	public:
		AAnimal( void );
		AAnimal( const std::string& type);
		AAnimal( const AAnimal& other );
		AAnimal& operator=( const AAnimal& other );
		virtual ~AAnimal( void );

		std::string		getType( void ) const;
		void			setType(const std::string& type);

		virtual void	makeSound( void ) const = 0;
};

#endif // ANIMAN_HPP