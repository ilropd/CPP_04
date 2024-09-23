/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:22:04 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/19 18:51:53 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

# define RED    "\033[31m"
# define YELLOW "\033[33m"
# define GREEN  "\033[32m"
# define RESET  "\033[0m"

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);
		WrongAnimal &operator=(const WrongAnimal& src);
		virtual ~WrongAnimal(void);
	
	void		makeSound()const;
	std::string	getType()const;
};

#endif
