/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bianca <bianca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:26:35 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/08 14:07:27 by bianca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog(void);
		Dog(Dog const & src);
		virtual ~Dog(void);
		Dog & operator=(Dog const & src);
		virtual Animal & operator=(Animal const & src);
		virtual void makeSound(void) const;
		virtual Brain *idea(void) const;
};

#endif