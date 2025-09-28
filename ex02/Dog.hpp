/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 19:34:26 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 19:18:56 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &ref);
	Dog &operator=(const Dog &ref);
	~Dog();
	void makeSound();
private:
	Brain *brain;
};