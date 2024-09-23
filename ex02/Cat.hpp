/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:49:42 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/20 18:59:40 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		std::string	_sound;
		Brain*		_brain;

	public:
		Cat();
		Cat(const Cat& copy);
		Cat &operator=(const Cat& src);
		~Cat(void);
	
	void	makeSound()const;
};

#endif
