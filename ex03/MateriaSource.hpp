/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:05:23 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/24 19:45:37 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria*	_library[4];
	
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
		MateriaSource &operator=(const MateriaSource& src);
		~MateriaSource();
	
	void	learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif
