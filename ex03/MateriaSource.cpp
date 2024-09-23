/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:56:35 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/27 17:38:54 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): IMateriaSource()
{
	std::cout << "Default MateriaSource constructor called" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		this->_library[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	std::cout << "Copy MateriaSource constructor called" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		delete this->_library[i];
		if (copy._library[i])
			this->_library[i] = copy._library[i]->clone();
		else
			this->_library[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource& src)
{
	std::cout << "Copy assingment MateriaSource constructor called" << std::endl;

	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->_library[i];
			if (src._library[i])
			{
				this->_library[i] = src._library[i]->clone();
			}
			else
			{
				this->_library[i] = NULL;
			}
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		delete this->_library[i];
	}
}


void	MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
	{
		std::cout << "Materia doesn´t exist. Cannot learn a null Materia." << std::endl;
		return ;
	}

	int	free_slot = -1;
	
	for (int i = 0; i < 4; i++)
	{
		if (this->_library[i] == NULL)
		{
			free_slot = i;
			break;
		}
	}
	
	if (free_slot >= 0)
	{
		this->_library[free_slot] = m;
		std::cout << "Materia " << m->getType() << " was learned and added to slot " << free_slot << "."<< std::endl;
	}
	else
	{
		std::cout << "There is no empty slot for this MateriaSource. Materia NOT learned." << std::endl;
		std::cout << "Materia was destroyed" << std::endl;
		delete m;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int in_lib = -1;

	for (int i = 0; i < 4; i++)
	{
		if (this->_library[i]->getType() == type)
		{
			in_lib = i;
			break ;
		}
	}
	
	if (in_lib >= 0)
	{
		std::cout << "Creating Materia of type " << type << std::endl;
		return (this->_library[in_lib]->clone());
	}
	else
	{
		std::cout << "Materia of type " << type << " is unknown. Materia NOT created." << std::endl;
		return (0);
	}
}
