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