/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:53:58 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/20 18:20:37 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->_type = "Wrong Cat";
	this->_sound = "Moooooooooooo";
}

WrongCat::WrongCat(const WrongCat& copy): WrongAnimal(copy)
{
	std::cout << "WrongCopy Cat constructor called" << std::endl;
	this->_sound = copy._sound;
}

WrongCat &WrongCat::operator=(const WrongCat& src)
{
	std::cout << "Copy assignment WrongCat operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		this->_sound = src._sound;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat called" << std::endl;
}

void	WrongCat::makeSound()const
{
	WrongAnimal::makeSound();
}
