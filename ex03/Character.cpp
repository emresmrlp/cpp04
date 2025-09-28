/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:55:42 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 18:35:59 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : name("Default")
{
	for (int i = 0; i < 100; i++)
		this->floorMaterias[i] = NULL;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "Character *Default* is created." << std::endl;
}

Character::Character(std::string const _name) : name(_name)
{
	for (int i = 0; i < 100; i++)
		this->floorMaterias[i] = NULL;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "Character *" << _name << "* is created." << std::endl;
}

Character::Character(const Character &ref)
{
	this->name = ref.getName();
	for (int i = 0; i < 100; i++)
		this->floorMaterias[i] = NULL;
	for (int i = 0; i < 4; i++)
	{
		if (ref.inventory[i])
			this->inventory[i] = ref.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	std::cout << "(DEBUG - Character) Copy constructor called." << std::endl;
}

Character &Character::operator=(const Character &ref)
{
	if (this != &ref)
	{
		this->name = ref.getName();
		for (int i = 0; i < 100; i++)
			this->floorMaterias[i] = NULL;
		for (int i = 0; i < 4; i++)
		{
			delete (this->inventory[i]);
			if (ref.inventory[i])
				this->inventory[i] = ref.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	std::cout << "(DEBUG - Character) Copy assignment operator called." << std::endl;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
        delete inventory[i];
	for (int j = 0; j < 100; j++)
        delete floorMaterias[j];
	std::cout << "(DEBUG - Character) Destructor called" << std::endl;
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* _materia)
{
	if (_materia == NULL)
		return ;
	for (int i = 0; i < 4; i++)
    {
		if (this->inventory[i] == NULL)
		{
			for (int j = 99; j >= 0; j--)
			{
				if (this->floorMaterias[j] != NULL)
				{
					if (this->floorMaterias[j] == _materia)
					{
						this->floorMaterias[j] = NULL;
						break ;
					}
				}
			}
			inventory[i] = _materia;
			std::cout << this->getName() << " is successfully equipped " << inventory[i]->getType() << " materia!" << std::endl;
			return ;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (this->floorMaterias[i] == NULL)
		{
			this->floorMaterias[i] = _materia;
			break ;
		}
	}
	std::cout << this->getName() << "'s inventory is full. Can't equip materia."<< std::endl;
}

void Character::unequip(int idx)
{
	bool canEquip;
	
	canEquip = false;
	if (idx < 0 || idx >= 4)
		return ;
	if (this->inventory[idx] == NULL)
		return ;
	for (int i = 0; i < 100; i++)
	{
		if (this->floorMaterias[i] == NULL)
		{
			this->floorMaterias[i] = this->inventory[idx];
			canEquip = true;
			break ;
		}
	}
	if (canEquip)
		this->inventory[idx] = NULL;
	else
		std::cout << "Floor is full. " << this->getName() << " can't equip materia!" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (this->inventory[idx] == NULL)
		return ;
	this->inventory[idx]->use(target);
}