/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:43:12 by melshafi          #+#    #+#             */
/*   Updated: 2024/11/06 11:21:47 by melshafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"

int main()
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j;
	// delete i;

	std::cout << "----------------------" << std::endl;
	
	Dog basic;
	{
		Dog tmp = basic;
	}

	std::cout << "----------------------" << std::endl;

	// Animal* animals[100];

	// for(int i = 0; i < 100; i++)
	// {
	// 	if (i % 2 == 0)
	// 		animals[i] = new Dog();
	// 	else
	// 		animals[i] = new Cat();
	// }

	// for(int i = 0; i < 100; i++)
	// 	delete animals[i];

	return 0;
}
