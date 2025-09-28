/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:08:34 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 16:13:08 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
public:
	IMateriaSource();
	IMateriaSource(const IMateriaSource &ref);
	IMateriaSource &operator=(const IMateriaSource &ref);
	virtual ~IMateriaSource();
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif