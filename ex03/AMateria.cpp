/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 20:03:26 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/27 12:53:32 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : _type("unknown")
{
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "Parameterized AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& copy) : _type(copy._type)
{
	std::cout << "Copy AMateria constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& src)
{
	std::cout << "Copy assingment AMateria constructor called" << std::endl;

	if (this != &src)
	{
		_type = src._type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* shoots an AMateria at " << target.getName() << " *" << std::endl;
}

