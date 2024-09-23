/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:49:42 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/20 18:59:08 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		std::string	_sound;
		Brain*		_brain;

	public:
		Dog();
		Dog(const Dog& copy);
		Dog &operator=(const Dog& src);
		~Dog(void);
	
	void	makeSound()const;
};

#endif
