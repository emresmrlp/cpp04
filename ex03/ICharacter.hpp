/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 14:44:16 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 18:02:52 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>

class AMateria;

class ICharacter
{
public:
	ICharacter();
	ICharacter(const ICharacter &ref);
	virtual ICharacter &operator=(const ICharacter &ref);
	virtual ~ICharacter();
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* _materia) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif