/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 14:17:44 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 18:10:35 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : type("Default")
{
	std::cout << "(DEBUG - AMateria) Default constructor is created." << std::endl;
}

AMateria::AMateria(std::string const &_type) : type(_type)
{
	std::cout << "(DEBUG - AMateria) " << this->getType() << " is created." << std::endl;
}

AMateria::AMateria(const AMateria &ref) : type(ref.type)
{
	std::cout << "(DEBUG - AMateria) Copy constructor called." << std::endl;
}

AMateria &AMateria::operator=(const AMateria &ref)
{
	(void)ref;
	std::cout << "(DEBUG - AMateria) Copy assignment operator called." << std::endl;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "* Materia has no effect *" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "(DEBUG - AMateria) " << this->getType() << " is destroyed." << std::endl;
}