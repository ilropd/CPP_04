/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:53:58 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/20 18:20:13 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_sound = "Mrrrr meow";
}

Cat::Cat(const Cat& copy): Animal(copy)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	this->_sound = copy._sound;
}

Cat &Cat::operator=(const Cat& src)
{
	std::cout << "Copy assignment Cat operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		this->_sound = src._sound;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
}

void	Cat::makeSound()const
{
	std::cout << GREEN << this->_type << " says " << YELLOW << this->_sound << RESET << std::endl;
}
