/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:39:55 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 16:39:59 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain {
	private:
		std::string _ideas[100];
	
	public:
		Brain( void );
		Brain( const Brain& other);
		Brain& operator=( const Brain& other );
		~Brain( void );

		std::string getIdea( int index ) const;
		void		setIdea( int index, const std::string& idea);
};

#endif // BRAIN_HPP