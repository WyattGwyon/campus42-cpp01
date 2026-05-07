/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 18:13:12 by clouden           #+#    #+#             */
/*   Updated: 2026/05/07 19:12:30 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	foo;
	Zombie	chuck("Chuck");

	foo.announce();
	chuck.announce();
	Zombie* fred = newZombie("Fred");
	delete fred;
	randomChump("Chump");
}
