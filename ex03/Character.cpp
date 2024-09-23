/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:03:19 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/28 13:31:16 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Character.hpp"

Character::Character()
{
	std::cout << "Default Character constructor called" << std::endl;
	this->_name = "Unnamed";
	for (int i = 0; i < 4; i++)
	{
		this->_slots[i] = NULL;
	}
}

Character::Character(std::string name)
{
	std::cout << "Named Character constructor called" << std::endl;
	this->_name = name;
	for (int i = 0; i < 4; i++)
	{
		this->_slots[i] = NULL;
	}
}

Character::Character(const Character& copy)
{
	std::cout << "Copy Character constructor called" << std::endl;
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		delete this->_slots[i];
		if (copy._slots[i])
		{
			this->_slots[i] = copy._slots[i]->clone();
		}
		else
		{
			this->_slots[i] = NULL;
		}
	}
}

Character &Character::operator=(const Character& src)
{
	std::cout << "Copy assingment Character constructor ccalled" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;

		for (int i = 0; i < 4; i++)
		{
			delete this->_slots[i];
			if (src._slots[i])
			{
				this->_slots[i] = src._slots[i]->clone();
			}
			else
			{
				this->_slots[i] = NULL;
			}
		}
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Destructor Character called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete this->_slots[i];
	}
}

std::string const &Character::getName()const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "Materia doesn´t exist. Cannot equip a null Materia." << std::endl;
		return ;
	}

	int	free_slot = -1;

	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i] == NULL)
		{
			free_slot = i;
			break;
		}
	}

	if (free_slot >= 0)
	{
		this->_slots[free_slot] = m;
		std::cout << "Materia " << m->getType() << " equiped to slot " << free_slot << "."<< std::endl;
	}
	else
	{
		_unequippedItems.addItem(m);
//		std::cout << "There is no empty slot for this character. Materia NOT equiped. Materia added to Inventory." << std::endl;

	}
}


void	Character::unequip(int idx)
{
	if ((idx >= 0) && (idx < 4) && this->_slots[idx])
	{
		_unequippedItems.addItem(this->_slots[idx]);
		this->_slots[idx] = NULL;
	}
/*	else if (!((idx >= 0) && (idx < 4)))
	{
		std::cout << "Character have only 0-3 slots. Try again." << std::endl;
	}
	else if (this->_slots[idx] == NULL)
	{
		std::cout << "This slot is already empty" << std::endl;
	}
	else
	{
		std::cout << "I dunno what to do [UNEQUIP]" << std::endl;
	}*/

}

void	Character::use(int idx, ICharacter& target)
{
	if ((idx >= 0) && (idx < 4) && this->_slots[idx])
	{
		this->_slots[idx]->use(target);
	}
/*	else if (!((idx >= 0) && (idx < 4)))
	{
		std::cout << "Character have only 0-3 slots. Try again." << std::endl;
	}
	else if (this->_slots[idx] == NULL)
	{
		std::cout << "This slot is empty. Nothing to use." << std::endl;
	}
	else
	{
		std::cout << "I dunno what to do [USE]" << std::endl;
	}*/
}
