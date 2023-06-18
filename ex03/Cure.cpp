/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:08:26 by bmuni             #+#    #+#             */
/*   Updated: 2023/06/18 13:51:59 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::Cure(const Cure &cpy) : AMateria(cpy)
{
	return ;
}

Cure& Cure::operator=(const Cure &cpy)
{
	this->AMateria::operator=(cpy);
	return (*this);
}

Cure::~Cure(void)
{
	return ;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *Cure::clone(void) const
{
	return new Cure(*this);
}