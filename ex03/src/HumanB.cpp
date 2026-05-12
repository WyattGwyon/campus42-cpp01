/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:41:42 by clouden           #+#    #+#             */
/*   Updated: 2026/05/12 19:42:58 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
	name_(name),
	weapon_(NULL)
{}

void	HumanB::setWeapon(Weapon& weapon)
{
	weapon_ = &weapon;
}

void	HumanB::attack()
{
	if(weapon_)
	{
		std::cout
			<< name_
			<< " attacks with their "
			<< weapon_->getType()
			<< std::endl;
	}
	else
	{
		std::cout
			<< name_
			<< " attacks with their bare hands."
			<< std::endl;
	}
}

