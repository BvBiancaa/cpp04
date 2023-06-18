/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bianca <bianca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:30:53 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/08 13:46:22 by bianca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat & Cat::operator=(Cat const & src)
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->type = src.type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

Brain *Cat::idea(void) const
{
	return (this->brain);
}