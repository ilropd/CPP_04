/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:40:27 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/19 16:36:34 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <string>
#include <iostream>

Animal::Animal(): _type("Unknown")
{
	std::cout << "Default Animal constructor called" << std::endl;
}


Animal::Animal(const Animal& copy)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal&  src)
{
	std::cout << "Copy assignment Animal operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}

void	Animal::makeSound()const
{
	std::cout << GREEN << "Do you know what I am? My sound is " << YELLOW << "bi-bip" << RESET << std::endl;
}

std::string Animal::getType()const
{
	return (this->_type);
}

