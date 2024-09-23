/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:43:27 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/20 19:13:13 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "colors.hpp"
#include <string>
#include <iostream>
#include <sstream>

Brain::Brain()
{
	int					i;
	std::stringstream	ss;
	std::string			number;

	std::cout << "Default Brain constructor called" << std::endl;
	i = 0;
	while (i < 100)
	{
		ss.str("");
		ss.clear();
		ss << (i + 1);
		ss >> number;
		_ideas[i] = "idea_" + number;
		i++;
	}
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &src)
{
	std::cout << "Copy assignment Brain operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
		{
			this->_ideas[i] = src._ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
    std::cout << "Destructor Brain called" << std::endl;
}
