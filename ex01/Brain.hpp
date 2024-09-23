/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:23:22 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/20 19:01:13 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain();
		Brain(const Brain& copy);
		Brain &operator=(const Brain& src);
		virtual ~Brain();
};

#endif
