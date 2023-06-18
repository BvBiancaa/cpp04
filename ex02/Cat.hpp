/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bianca <bianca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:25:26 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/08 18:30:57 by bianca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat(void);
		Cat(Cat const & src);
		virtual ~Cat(void);
		Cat & operator=(Cat const & src);
		virtual void makeSound(void) const;
		virtual Brain *idea(void) const;
};

#endif