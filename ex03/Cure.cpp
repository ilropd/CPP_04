/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:36:52 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/28 13:16:30 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(std::string type): AMateria(type)
{
	std::cout << "Named Cure constructor called" << std::endl;
}

Cure::Cure(const Cure& copy): AMateria(copy)
{
	std::cout << "Copy Cure constructor called" << std::endl;
	*this = copy;
}

Cure &Cure::operator=(const Cure& src)
{
	std::cout << "Copy assingment Cure constructor called" << std::endl;
	if (this != &src)
	{
		AMateria::operator=(src);
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
	std::cout << "Clone of AMateria with type CURE created" << std::endl;
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
