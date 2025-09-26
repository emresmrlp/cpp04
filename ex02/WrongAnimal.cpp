/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 12:17:12 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/25 12:19:01 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "(DEBUG - WrongAnimal) Default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
	this->type = ref.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ref)
{
	if (this != &ref)
		this->type = ref.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "(DEBUG - WrongAnimal) Destructor called." << std::endl;
}

std::string WrongAnimal::getType()
{
	return (type);
}

void WrongAnimal::makeSound()
{
	std::cout << "*generic animal sound*" << std::endl;
}