/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 19:34:30 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/25 12:09:26 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &ref);
	Cat &operator=(const Cat &ref);
	~Cat();
	void makeSound();
};