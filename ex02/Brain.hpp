/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:11:02 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/25 14:15:02 by ysumeral         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#include "Animal.hpp"

class Brain
{
public:
	Brain();
	Brain(const Brain &ref);
	Brain &operator=(const Brain &ref);
	~Brain();
private:
	std::string	ideas[100];
};