/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:09:06 by bmuni             #+#    #+#             */
/*   Updated: 2023/06/18 13:48:47 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <string>
#include <iostream>

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter(void);
		virtual std::string const &getName(void) const = 0;
		virtual void equip(AMateria *mat) = 0;
		virtual void unequip(int index) = 0;
		virtual void use(int index, ICharacter &target) = 0;
};

#endif