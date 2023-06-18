/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:08:55 by bmuni             #+#    #+#             */
/*   Updated: 2023/06/18 13:49:42 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &cpy);
		Ice &operator=(const Ice &cpy);
		~Ice(void);
		AMateria *clone(void) const;
		void use(ICharacter &target);
};

#endif