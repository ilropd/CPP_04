/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:53:58 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/20 18:20:22 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(): Animal()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_sound = "Barrrrrrrk";
}

Dog::Dog(const Dog& copy): Animal(copy)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	this->_sound = copy._sound;
}

Dog &Dog::operator=(const Dog& src)
{
	std::cout << "Copy assignment Dog operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		this->_sound = src._sound;
	}
	return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called" << std::endl;
}

void	Dog::makeSound()const
{
	std::cout << GREEN << this->getType() << " says " << YELLOW << this->_sound << RESET << std::endl;
}
