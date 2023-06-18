/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:08:49 by bmuni             #+#    #+#             */
/*   Updated: 2023/06/18 13:50:48 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return ;
}

Ice::Ice(const Ice &cpy) : AMateria(cpy)
{
	return ;
}

Ice& Ice::operator=(const Ice &cpy)
{
	this->AMateria::operator=(cpy);
	return (*this);
}

Ice::~Ice(void)
{
	return ;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone(void) const
{
	return new Ice(*this);
}