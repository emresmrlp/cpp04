/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 19:40:19 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/27 14:37:46 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "(DEBUG - Animal) Default constructor called." << std::endl;
}

Animal::Animal(const Animal &ref)
{
	this->type = ref.type;
}

Animal &Animal::operator=(const Animal &ref)
{
	if (this != &ref)
		this->type = ref.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "(DEBUG - Animal) Destructor called." << std::endl;
}

std::string Animal::getType()
{
	return (type);
}

void Animal::makeSound()
{
	std::cout << "*generic animal sound*" << std::endl;
}
