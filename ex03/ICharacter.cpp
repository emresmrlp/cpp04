/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 14:44:09 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 17:57:15 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "(DEBUG - ICharacter) Default constructor is created." << std::endl;
}

ICharacter::ICharacter(const ICharacter &ref)
{
	(void)ref;
	std::cout << "(DEBUG - ICharacter) Copy constructor called." << std::endl;
}

ICharacter &ICharacter::operator=(const ICharacter &ref)
{
	(void)ref;
	std::cout << "(DEBUG - ICharacter) Copy assignment operator called." << std::endl;
	return (*this);
}

ICharacter::~ICharacter()
{
	std::cout << "(DEBUG - ICharacter) Destructor called." << std::endl;
}