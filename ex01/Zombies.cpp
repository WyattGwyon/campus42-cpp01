/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombies.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:48:58 by clouden           #+#    #+#             */
/*   Updated: 2026/05/07 20:06:59 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
using std::cout;
using std::string;

Zombie::Zombie() :
	name_ = "Foo"
{}

Zombie::Zombie(string name)
{
	name_ = name;
}

void	Zombie::announce()
{
	cout << name_ << ": BRAIIINZZZ... \n";
}


