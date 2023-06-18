/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:07:50 by bmuni             #+#    #+#             */
/*   Updated: 2023/06/18 13:55:27 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
	return ;
}

AMateria::AMateria(const AMateria &cpy) : _type(cpy._type)
{
	return ;
}

AMateria &AMateria::operator=(const AMateria &cpy)
{
	this->_type = cpy._type;
	return (*this);
}

AMateria::~AMateria(void)
{
	return ;
}

std::string const &AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	return ;
}