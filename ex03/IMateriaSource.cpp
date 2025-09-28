/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:08:35 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 16:13:49 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	std::cout << "(DEBUG - IMateriaSource) Default constructor is created." << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource &ref)
{
	(void)ref;
	std::cout << "(DEBUG - IMateriaSource) Copy constructor called." << std::endl;
}

IMateriaSource &IMateriaSource::operator=(const IMateriaSource &ref)
{
	(void)ref;
	std::cout << "(DEBUG - IMateriaSource) Copy assignment operator called." << std::endl;
	return (*this);
}

IMateriaSource::~IMateriaSource()
{
	std::cout << "(DEBUG - IMateriaSource) Destructor called" << std::endl;
}