/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:07:56 by bmuni             #+#    #+#             */
/*   Updated: 2023/06/18 13:54:33 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria(std::string const &type);
		AMateria(const AMateria &cpy);
		AMateria& operator=(const AMateria &cpy);
		virtual ~AMateria(void);
		std::string const &getType(void) const;
		virtual AMateria *clone(void) const = 0;
		virtual void use(ICharacter &target);
};

#endif