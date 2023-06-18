/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:31:45 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/07 23:32:20 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & src)
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->type = src.type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}