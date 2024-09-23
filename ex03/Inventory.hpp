/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inventory.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:01:04 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/24 18:46:47 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INVENTORY_HPP
# define INVENTORY_HPP

# include <string>
# include "AMateria.hpp"

class Inventory
{
	private:
		AMateria**	_items;
		int			_size;
		int			_capacity;

		void	resizeInventory(int newCapacity);

	public:
		Inventory();
		Inventory(const Inventory& copy);
		Inventory &operator=(const Inventory& src);
		~Inventory();

	void	addItem(AMateria* item);
	AMateria* getItem(int index)const;
	int	getSize() const;

};

#endif
