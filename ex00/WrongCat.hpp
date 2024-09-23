/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:49:42 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/19 17:43:03 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include "WrongAnimal.hpp"

# define RED    "\033[31m"
# define YELLOW "\033[33m"
# define GREEN  "\033[32m"
# define RESET  "\033[0m"


class WrongCat: public WrongAnimal
{
	private:
		std::string	_sound;

	public:
		WrongCat();
		WrongCat(const WrongCat& copy);
		WrongCat &operator=(const WrongCat& src);
		~WrongCat(void);
	
	void	makeSound()const;
};

#endif
