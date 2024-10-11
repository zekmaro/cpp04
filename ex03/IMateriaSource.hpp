/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:31:41 by anarama           #+#    #+#             */
/*   Updated: 2024/10/11 22:35:19 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

class IMateriaSource {
	public:
		virtual ~IMateriaSource();
		virtual void learnMateria( AMateria* ) = 0;
		virtual AMateria* createMateria( std::string const& type ) = 0;
};

#endif // IMATERIASOURCE_HPP