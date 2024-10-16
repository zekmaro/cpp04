/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:25:09 by anarama           #+#    #+#             */
/*   Updated: 2024/10/14 11:30:23 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# define DEFAULT_WRONG_TYPE "default_wrong_type"

# include <string>

class WrongAnimal {
	protected:
		std::string _type;

	public:
		WrongAnimal( void );
		WrongAnimal( const std::string& type);
		WrongAnimal( const WrongAnimal& other );
		WrongAnimal& operator=( const WrongAnimal& other );
		virtual ~WrongAnimal( void );

		std::string		getType( void ) const;
		void			setType(const std::string& type );

		void	makeSound( void ) const;
			
};

#endif // WRONGANIMAL_HPP