/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:15:05 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 19:07:22 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
protected:
	AMateria *materiaSource[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &ref);
	MateriaSource &operator=(const MateriaSource &ref);
	virtual ~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif