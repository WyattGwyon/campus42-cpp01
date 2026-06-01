/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 18:13:12 by clouden           #+#    #+#             */
/*   Updated: 2026/06/01 19:33:42 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	foo("Foo");
	Zombie	chuck("Chuck");

	foo.announce();
	chuck.announce();
	Zombie* fred = newZombie("Fred");
	fred->announce();
	delete fred;
	randomChump("Chump");
}
