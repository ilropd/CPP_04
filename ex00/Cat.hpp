/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:49:42 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/19 17:30:08 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"

# define RED    "\033[31m"
# define YELLOW "\033[33m"
# define GREEN  "\033[32m"
# define RESET  "\033[0m"


class Cat: public Animal
{
	private:
		std::string	_sound;

	public:
		Cat();
		Cat(const Cat& copy);
		Cat &operator=(const Cat& src);
		~Cat(void);
	
	void	makeSound()const;
};

#endif
