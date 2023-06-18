/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:09:29 by bmuni             #+#    #+#             */
/*   Updated: 2023/06/18 13:45:22 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_mat[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &cpy);
		MateriaSource& operator=(const MateriaSource &cpy);
		~MateriaSource(void);
		void learnMateria(AMateria *mat);
		AMateria* createMateria(const std::string &s);
};

#endif
