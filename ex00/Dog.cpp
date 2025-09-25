/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:49:27 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/25 12:08:14 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "(DEBUG - Dog) Default constructor ~or Spike :)~ called." << std::endl;
}

Dog::Dog(const Dog &ref)
{
	this->type = ref.type;
}

Dog &Dog::operator=(const Dog &ref)
{
	if (this != &ref)
		this->type = ref.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "(DEBUG - Dog) Destructor called (RIP SPIKE)." << std::endl;
}

void Dog::makeSound()
{
	std::cout << "Woof woof!" << std::endl;
}