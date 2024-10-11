#ifndef CAT_HPP
# define CAT_HPP

# include <string>

# include "AAnimal.hpp"
# include "Brain.hpp"

# define DEFAULT_CAT_TYPE "Cat"

class Cat: public AAnimal {
	private:
		Brain *catBrain;

	public:
		Cat( void );
		Cat( const Cat& other );
		Cat& operator=( const Cat& other );
		~Cat( void );

		void	makeSound( void ) const;
};

#endif // CAT_HPP