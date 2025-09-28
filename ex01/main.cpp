/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:49:43 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/28 19:16:21 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	Animal *meta;
	Animal *dog;
	Animal *cat;
	Cat originalCat;
    Cat copyCat;
	Dog originalDog;
	Dog copyDog;

	meta = new Animal();
	dog = new Dog();
	cat = new Cat();
	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	meta->makeSound();
	cat->makeSound();
	dog->makeSound();
    copyDog = originalDog;
    copyCat = originalCat;
    std::cout << "Dog brain addresses: " << &originalDog << " vs " << &copyDog << std::endl;
    std::cout << "Cat brain addresses: " << &originalCat << " vs " << &copyCat << std::endl;
	delete (meta);
	delete (dog);
	delete (cat);
	return (0);
}
