/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 14:59:27 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 17:49:18 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "(DEBUG - Ice) Default constructor is created." << std::endl;
}

Ice::Ice(const Ice &ref) : AMateria(ref)
{
	std::cout << "(DEBUG - Ice) Copy constructor called." << std::endl;
}

Ice &Ice::operator=(const Ice &ref)
{
	std::cout << "(DEBUG - Ice) Copy assignment operator called." << std::endl;
	if (this != &ref)
		AMateria::operator=(ref);
	return (*this);
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	std::cout << "(DEBUG - Ice) " << this->getType() << " is destroyed." << std::endl;
}