/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 12:17:10 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/25 12:23:57 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#include "iostream"

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &ref);
	WrongAnimal &operator=(const WrongAnimal &ref);
	~WrongAnimal();
	std::string getType();
	void	makeSound();
protected:
	std::string	type;	
};