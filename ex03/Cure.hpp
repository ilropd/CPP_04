/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:40:55 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/26 14:56:04 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(std::string type);
		Cure(const Cure& copy);
		Cure &operator=(const Cure& src);
		~Cure();

	AMateria* clone() const;
	void	use(ICharacter& target);
};

#endif
