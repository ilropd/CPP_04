/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:40:27 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/19 17:08:05 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

WrongAnimal::WrongAnimal(): _type("Insane Zebra")
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal&  src)
{
	std::cout << "Copy assignment WrongAnimal operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

void	WrongAnimal::makeSound()const
{
	std::cout << GREEN << this->getType() << " says " << YELLOW << "Well, I'm not here to fulfill your expectations. So, WTF, dude?!" << RESET << std::endl;
}

std::string WrongAnimal::getType()const
{
    return (this->_type);
}
