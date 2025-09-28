/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 15:59:20 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 17:49:54 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "(DEBUG - Cure) Default constructor is created." << std::endl;
}

Cure::Cure(const Cure &ref) : AMateria(ref)
{
	std::cout << "(DEBUG - Cure) Copy constructor called." << std::endl;
}

Cure &Cure::operator=(const Cure &ref)
{
	std::cout << "(DEBUG - Cure) Copy assignment operator called." << std::endl;
	if (this != &ref)
		AMateria::operator=(ref);
	return (*this);
}

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
	std::cout << "(DEBUG - Cure) " << this->getType() << " is destroyed." << std::endl;
}