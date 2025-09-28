/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:15:06 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 19:07:26 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materiaSource[i] = NULL;
	std::cout << "(DEBUG - MateriaSource) Default constructor is created." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &ref)
{
	for (int i = 0; i < 4; i++)
	{
		if (ref.materiaSource[i])
			this->materiaSource[i] = ref.materiaSource[i]->clone();
		else
			this->materiaSource[i] = NULL;
	}
	std::cout << "(DEBUG - MateriaSource) Copy constructor called." << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ref)
{
	if (this != &ref)
	{
		for (int i = 0; i < 4; i++)
		{
			delete (this->materiaSource[i]);
			if (ref.materiaSource[i])
				this->materiaSource[i] = ref.materiaSource[i]->clone();
			else
				this->materiaSource[i] = NULL;
		}
	}
	std::cout << "(DEBUG - MateriaSource) Copy assignment operator called." << std::endl;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *_materia)
{
	if (!_materia)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->materiaSource[i] == NULL)
		{
			materiaSource[i] = _materia;
			std::cout << "(*_*) New materia (" << _materia->getType() << ") learned!" << std::endl;
			return ;
		}
	}
	std::cout << "Materia limit reached. Materia can't be learned." << std::endl;	
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materiaSource[i] != NULL && materiaSource[i]->getType() == type)
			return (materiaSource[i]->clone());
	}
	return (NULL);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
        delete materiaSource[i];
	std::cout << "(DEBUG - MateriaSource) Destructor called" << std::endl;
}