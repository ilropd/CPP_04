/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:00:26 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/24 19:05:13 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"
# include "Inventory.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_slots[4];
		Inventory _unequippedItems;
	
	public:
		Character();
		Character(std::string name);
		Character(const Character& copy);
		Character &operator=(const Character& src);
		~Character();

	std::string const &getName()const;
	void	equip(AMateria* m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);
};

#endif
