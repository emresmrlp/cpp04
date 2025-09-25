/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:49:33 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/25 15:15:51 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "(DEBUG - Cat) Default constructor ~Tom~ called." << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &ref)
{
	this->type = ref.type;
	this->brain = new Brain(*ref.brain);
}

Cat &Cat::operator=(const Cat &ref)
{
	if (this != &ref)
	{
		this->type = ref.type;
		delete (this->brain);
		this->brain = new Brain(*ref.brain);
	}	
	return (*this);
}

Cat::~Cat()
{
	delete (this->brain);
	std::cout << "(DEBUG - Cat) Destructor called (RIP TOM)." << std::endl;
}

void Cat::makeSound()
{
	std::cout << "Meow meow!" << std::endl;
}
