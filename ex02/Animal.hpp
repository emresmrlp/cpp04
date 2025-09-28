/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 19:34:18 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 19:14:50 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#include "iostream"
#include "Brain.hpp"

class Animal
{
public:
	Animal();
	Animal(const Animal &ref);
	Animal &operator=(const Animal &ref);
	virtual			~Animal();
	std::string		getType();
	virtual void	makeSound() = 0;
protected:
	std::string	type;	
};