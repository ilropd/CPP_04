/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:49:42 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/20 18:59:55 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat: public WrongAnimal
{
	private:
		std::string	_sound;
		Brain*		_brain;

	public:
		WrongCat();
		WrongCat(const WrongCat& copy);
		WrongCat &operator=(const WrongCat& src);
		~WrongCat(void);
	
	void	makeSound()const;
};

#endif
