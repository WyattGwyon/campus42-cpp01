/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 13:51:28 by clouden           #+#    #+#             */
/*   Updated: 2026/06/01 19:28:16 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
using std::cout;
using std::string;

Zombie::Zombie() :
	name_("Foo")
{}

Zombie::~Zombie()
{
	cout << name_ << " has been destroyed!\n";
}

Zombie::Zombie(string name)
{
	name_ = name;
}

void	Zombie::announce(void)
{
	cout << name_ << ": BraiiiiiiinnnzzzZ...\n";
}
