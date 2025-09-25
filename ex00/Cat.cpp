/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:49:33 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/25 12:08:11 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "(DEBUG - Cat) Default constructor ~Tom~ called." << std::endl;
}

Cat::Cat(const Cat &ref)
{
	this->type = ref.type;
}

Cat &Cat::operator=(const Cat &ref)
{
	if (this != &ref)
		this->type = ref.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "(DEBUG - Cat) Destructor called (RIP TOM)." << std::endl;
}

void Cat::makeSound()
{
	std::cout << "Meow meow!" << std::endl;
}