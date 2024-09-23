/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:49:42 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/19 17:31:14 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include "Animal.hpp"

# define RED    "\033[31m"
# define YELLOW "\033[33m"
# define GREEN  "\033[32m"
# define RESET  "\033[0m"


class Dog: public Animal
{
	private:
		std::string	_sound;

	public:
		Dog();
		Dog(const Dog& copy);
		Dog &operator=(const Dog& src);
		~Dog(void);
	
	void	makeSound()const;
};

#endif
