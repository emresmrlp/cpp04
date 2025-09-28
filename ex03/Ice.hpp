/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 14:59:28 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 17:49:32 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class ICharacter;

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &ref);
	Ice &operator=(const Ice &ref);
	virtual		~Ice();
	AMateria*	clone() const;
	void		use(ICharacter& target);
};

#endif