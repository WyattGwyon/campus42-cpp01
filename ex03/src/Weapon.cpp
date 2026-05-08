/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:39:40 by clouden           #+#    #+#             */
/*   Updated: 2026/05/08 21:57:42 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	type_ = "crude spiked club";
}

Weapon::Weapon(std::string type)
{
	type_ = type;
}

std::string	Weapon::getType() const
{
	std::cout << "Type of Weapon: " << type_ << std::endl;
}

void	Weapon::setType(std::string type)
{
	type_ = type;
}
