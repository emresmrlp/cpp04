/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:49:43 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 19:26:18 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	Animal *dog;
	Animal *cat;

	dog = new Dog();
	cat = new Cat();
	std::cout << "Animal is abstract class!" << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	cat->makeSound();
	dog->makeSound();
	delete (dog);
	delete (cat);
	return (0);
}