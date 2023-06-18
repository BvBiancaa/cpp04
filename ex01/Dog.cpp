/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bianca <bianca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:31:45 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/08 13:56:46 by bianca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog & Dog::operator=(Dog const & src)
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->type = src.type;
	return (*this);
}

Animal & Dog::operator=(Animal const & src)
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->type = src.getType();
	*(this->brain) = *(src.idea());
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}

Brain *Dog::idea(void) const
{
	return (this->brain);
}