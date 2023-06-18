/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:14:48 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/11 22:20:47 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal(void);
		Animal & operator=(Animal const & src);
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
		virtual Brain *idea(void) const;
};

#endif