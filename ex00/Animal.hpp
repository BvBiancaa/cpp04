/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:14:48 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/07 23:35:30 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal(void);
		Animal & operator=(Animal const & src);
		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif