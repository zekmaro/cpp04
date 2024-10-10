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