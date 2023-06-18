/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bianca <bianca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:11:43 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/08 18:30:02 by bianca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *An[100];
	Brain *brain;
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			An[i] = new Dog();
		else
			An[i] = new Cat();
	}
 	brain = An[1]->idea();
	brain->ideas[0] = "mi chiamp";
	brain->ideas[1] = "gigi";
	std::cout << An[1]->idea()->ideas[0] << std::endl;
	std::cout << An[1]->idea()->ideas[1] << std::endl;
	brain = An[2]->idea();
	brain->ideas[0] = "ciaociao";
	brain->ideas[1] = "baobab";
 	std::cout << An[2]->idea()->ideas[0] << std::endl;
	std::cout << An[2]->idea()->ideas[1] << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << An[i]->getType() << std::endl;
		An[i]->makeSound();
	}
	for (int i = 0; i < 100; i++)
	{
		delete An[i];
	}
}
