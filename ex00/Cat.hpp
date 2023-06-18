/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:25:26 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/07 23:35:11 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		virtual ~Cat(void);
		Cat & operator=(Cat const & src);
		virtual void makeSound(void) const;
};

#endif