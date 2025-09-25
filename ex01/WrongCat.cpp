/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 12:17:03 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/25 14:32:18 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "(DEBUG - WrongCat) Default constructor ~WrongTom~ called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &ref)
{
	this->type = ref.type;
}

WrongCat &WrongCat::operator=(const WrongCat &ref)
{
	if (this != &ref)
		this->type = ref.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "(DEBUG - WrongCat) Destructor called (RIP WRONGTOM)." << std::endl;
}

void WrongCat::makeSound()
{
	std::cout << "Meow meow!" << std::endl;
}