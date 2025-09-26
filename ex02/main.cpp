/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:49:43 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/26 16:24:27 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	Animal *dog = new Dog();
	Animal *cat = new Cat();
	std::cout << "Animal is abstract class!" << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	cat->makeSound();
	dog->makeSound();
	std::cout << "Shallow test -->" << std::endl;
	Dog originalDog;
    Dog copyDog = originalDog;
    Cat originalCat;
    Cat copyCat;
    copyCat = originalCat;
    std::cout << "Dog brain addresses: " << &originalDog << " vs " << &copyDog << std::endl;
    std::cout << "Cat brain addresses: " << &originalCat << " vs " << &copyCat << std::endl;
	delete (dog);
	delete (cat);
	return (0);
}