/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inventory.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:07:57 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/26 18:38:15 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Inventory.hpp"
#include "AMateria.hpp"

void	Inventory::resizeInventory(int newCapacity)
{
	AMateria** newItems = new AMateria*[newCapacity];
	
	for (int i = 0; i < _size; ++i)
	{            
		newItems[i] = _items[i];
	}

	delete[] _items;

	_items = newItems;
	_capacity = newCapacity;    
}

Inventory::Inventory(): _items(NULL), _size(0), _capacity(0)
{
	std::cout << "Default Inventory constructor called" << std::endl;
}

Inventory::Inventory(const Inventory& copy): _items(NULL), _size(copy._size), _capacity(copy._capacity)
{
	std::cout << "Copy Inventory consructor called" << std::endl;
	if (_capacity > 0)
	{
		_items = new AMateria*[_capacity];
		for (int i = 0; i < _size; ++i)
		{
			_items[i] = copy._items[i]->clone();
		}
	}
}

Inventory &Inventory::operator=(const Inventory& src)
{
	std::cout << "Copy assingment Inventory consructor called" << std::endl;

	if (this != &src)
	{
		for (int i = 0; i < _size; ++i)
		{
			delete _items[i];
		}

		delete[] _items;

		_size = src._size;
		_capacity = src._capacity;
		_items = new AMateria*[_capacity];

		for (int i = 0; i < _size; ++i)
		{
			_items[i] = src._items[i]->clone();
		}
	}
	return (*this);
}

Inventory::~Inventory()
{
	std::cout << "Inventory destructor called" << std::endl;
	for (int i = 0; i < _size; ++i)
	{
		delete _items[i];
	}

	delete[] _items;
}

void	Inventory::addItem(AMateria* item)
{
	if (_size == _capacity)
	{
		if (_capacity == 0)
		{
			resizeInventory(1);
		}
		else
		{
			resizeInventory(_capacity + 5);
		}
	}
	_items[_size++] = item;
	std::cout << "Item " << item->getType() << " added to Inventory. Now we have " << _size << " item(s) in Inventory." << std::endl;
}

AMateria* Inventory::getItem(int index)const
{
	if (index >= 0 && index < _size)
	{
		return (_items[index]);
	}

	return (NULL);
}

int	Inventory::getSize()const
{
	return (_size);
}
