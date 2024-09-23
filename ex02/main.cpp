/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:46:53 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/21 13:01:13 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#include <iostream>

int main()
{
	const int numAnimals = 4;
	Animal* animals[numAnimals];

	for (int i = 0; i < numAnimals / 2; i++)
	{
		animals[i] = new Dog();
	}

	for (int i = numAnimals / 2; i < numAnimals; i++)
	{
		animals[i] = new Cat();
	}

	for (int i = 0; i < numAnimals; i++)
	{
		animals[i]->makeSound();
	}

	for (int i = 0; i < numAnimals; i++)
	{
		delete animals[i];
	}

    return 0;
}
