/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongMain.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 12:17:06 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/26 16:31:08 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	WrongAnimal *meta = new WrongAnimal();
	WrongAnimal *cat = new WrongCat();

	std::cout << cat->getType() << std::endl;
	meta->makeSound();
	cat->makeSound();
	delete (meta);
	delete (cat);
	return (0);
}