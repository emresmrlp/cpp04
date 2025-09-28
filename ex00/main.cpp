/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:49:43 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 19:28:16 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *meta;
	Animal *dog;
	Animal *cat;

	meta = new Animal();
	dog = new Dog();
	cat = new Cat();
	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	meta->makeSound();
	cat->makeSound();
	dog->makeSound();
	delete (meta);
	delete (dog);
	delete (cat);
	return (0);
}