/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:49:27 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/25 15:15:54 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "(DEBUG - Dog) Default constructor ~or Spike :)~ called." << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &ref)
{
	this->type = ref.type;
	this->brain = new Brain(*ref.brain);
}

Dog &Dog::operator=(const Dog &ref)
{
	if (this != &ref)
	{
		this->type = ref.type;
		delete (this->brain);
		this->brain = new Brain(*ref.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete (this->brain);
	std::cout << "(DEBUG - Dog) Destructor called (RIP SPIKE)." << std::endl;
}

void Dog::makeSound()
{
	std::cout << "Woof woof!" << std::endl;
}
