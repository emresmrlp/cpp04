/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 14:18:15 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 17:51:07 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria &ref);
	AMateria &operator=(const AMateria &ref);
	virtual ~AMateria();
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif