/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:21:19 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/25 14:15:03 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "(DEBUG - Brain) Default constructor called." << std::endl;
}

Brain::Brain(const Brain &ref)
{
	std::copy(ref.ideas, ref.ideas + 100, this->ideas);
}

Brain &Brain::operator=(const Brain &ref)
{
	if (this != &ref)
		std::copy(ref.ideas, ref.ideas + 100, this->ideas);
	return (*this);
}

Brain::~Brain()
{
	std::cout << "(DEBUG - Brain) Destructor called." << std::endl;
}
