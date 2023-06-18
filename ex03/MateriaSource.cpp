/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:09:24 by bmuni             #+#    #+#             */
/*   Updated: 2023/06/18 13:45:38 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_mat[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
	for (int i = 0; i < 4; i++)
		this->_mat[i] = (cpy._mat[i]) ? cpy._mat[i]->clone() : NULL;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& cpy)
{
	if (this != &cpy)
	{
		this->~MateriaSource();
		for (int i = 0; i < 4; i++)
			this->_mat[i] = (cpy._mat[i]) ? cpy._mat[i]->clone() : NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_mat[i])
			delete this->_mat[i];
}

void MateriaSource::learnMateria(AMateria *mat)
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

AMateria* MateriaSource::createMateria(const std::string &s)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_mat[i] && this->_mat[i]->getType() == s)
			return this->_mat[i]->clone();
	}
	return (NULL);
}