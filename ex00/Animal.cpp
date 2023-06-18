/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:22:44 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/07 23:33:37 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & src)
{
	std::cout << "Animal assignation operator called" << std::endl;
	this->type = src.type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	return ;
}
