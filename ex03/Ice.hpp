/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:40:55 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/26 14:37:56 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(std::string type);
		Ice(const Ice& copy);
		Ice &operator=(const Ice& src);
		~Ice();

	AMateria* clone() const;
	void	use(ICharacter& target);
};

#endif
