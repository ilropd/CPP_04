/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:22:04 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/19 17:30:38 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

# define RED    "\033[31m"
# define YELLOW "\033[33m"
# define GREEN  "\033[32m"
# define RESET  "\033[0m"

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(const Animal& copy);
		Animal &operator=(const Animal& src);
		virtual ~Animal(void);
	
	virtual void	makeSound()const;
	std::string		getType()const;
};

#endif
