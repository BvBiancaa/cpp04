/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:08:43 by bmuni             #+#    #+#             */
/*   Updated: 2023/06/18 13:51:09 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure& cpy);
		Cure& operator=(const Cure &cpy);
		~Cure(void);
		AMateria *clone(void) const;
		void use(ICharacter &target);
};

#endif