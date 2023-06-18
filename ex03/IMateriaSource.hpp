/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:09:12 by bmuni             #+#    #+#             */
/*   Updated: 2023/06/18 13:46:07 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"
#include <string>

class IMateriaSource
{
	public:
		virtual ~IMateriaSource(void);
		virtual void learnMateria(AMateria *mat) = 0;
		virtual AMateria* createMateria(const std::string &s) = 0;
};

#endif