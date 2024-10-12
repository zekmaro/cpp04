/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:44:31 by anarama           #+#    #+#             */
/*   Updated: 2024/10/12 14:48:11 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "IMateriaSource.hpp"

IMateriaSource::~IMateriaSource( void ) {
	std::cout << "IMateriaSource was destroyed!" << std::endl;
}

