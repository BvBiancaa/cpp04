/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:08:07 by bmuni             #+#    #+#             */
/*   Updated: 2023/06/18 13:52:44 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria *_mat[4];
	public:
		Character(const std::string &name);
		Character(const Character &cpy);
		Character &operator=(const Character &cpy);
		~Character(void);
		std::string const &getName(void) const;
		void equip(AMateria *mat);
		void unequip(int index);
		void use(int index, ICharacter &target);
};

#endif