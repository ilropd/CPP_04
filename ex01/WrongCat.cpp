/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:53:58 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/20 19:10:09 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "colors.hpp"
#include <iostream>

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->_type = "Wrong Cat";
	this->_sound = "Moooooooooooo";
	this->_brain = new Brain();
}

WrongCat::WrongCat(const WrongCat& copy): WrongAnimal(copy)
{
	std::cout << "WrongCopy Cat constructor called" << std::endl;
	this->_sound = copy._sound;
	this->_brain = new Brain(*copy._brain);
}

WrongCat &WrongCat::operator=(const WrongCat& src)
{
	std::cout << "Copy assignment WrongCat operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		this->_sound = src._sound;
		delete _brain;
		this->_brain = new Brain(*src._brain);
	}
	return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat called" << std::endl;
	delete _brain;
}

void	WrongCat::makeSound()const
{
	WrongAnimal::makeSound();
}
