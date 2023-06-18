/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:08:02 by bmuni             #+#    #+#             */
/*   Updated: 2023/06/18 13:54:07 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(const std::string &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_mat[i] = NULL;
}

Character::Character(const Character &cpy) : _name(cpy._name)
{
	for (int i = 0; i < 4; i++)
		this->_mat[i] = (cpy._mat[i]) ? cpy._mat[i]->clone() : NULL;
}

Character &Character::operator=(const Character &cpy)
{
	if (this != &cpy)
	{
		this->~Character();
		this->_name = cpy._name;
		for (int i = 0; i < 4; i++)
			this->_mat[i] = (cpy._mat[i]) ? cpy._mat[i]->clone() : NULL;
	}
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_mat[i] != NULL)
			delete this->_mat[i];
}

std::string const &Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria *mat)
{
	if (mat)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->_mat[i])
			{
				this->_mat[i] = mat;
				break;
			}
		}
	}
}

void Character::unequip(int index)
{
	if (index >= 0 && index <= 3)
		this->_mat[index] = NULL;
}

void Character::use(int index, ICharacter &target)
{
	if (index >= 0 && index <= 3 && this->_mat[index])
		this->_mat[index]->use(target);
}