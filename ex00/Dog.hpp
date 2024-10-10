#ifndef DOG_HPP
# define DOG_HPP

# include <string>

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