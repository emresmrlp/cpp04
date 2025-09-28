/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 15:59:26 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 17:50:01 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class ICharacter;

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &ref);
	Cure &operator=(const Cure &ref);
	virtual		~Cure();
	AMateria*	clone() const;
	void		use(ICharacter& target);
};

#endif