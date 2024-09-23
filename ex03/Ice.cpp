/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:36:52 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/26 14:40:19 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(std::string type): AMateria(type)
{
	std::cout << "Named Ice constructor called" << std::endl;
}

Ice::Ice(const Ice& copy): AMateria(copy)
{
	std::cout << "Copy Ice constructor called" << std::endl;
	*this = copy;
}

Ice &Ice::operator=(const Ice& src)
{
	std::cout << "Copy assingment Ice constructor called" << std::endl;
	if (this != &src)
	{
		AMateria::operator=(src);
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
	std::cout << "Clone of AMateria with type ICE created" << std::endl;
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
