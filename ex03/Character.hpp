/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:55:41 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 17:51:25 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
protected:
	std::string	name;
	AMateria	*inventory[4];
	AMateria	*floorMaterias[100];
public:
	Character();
	Character(std::string const _name);
	Character(const Character &ref);
	Character &operator=(const Character &ref);
	virtual		~Character();
	virtual std::string const & getName() const;
	virtual void equip(AMateria* _materia);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif