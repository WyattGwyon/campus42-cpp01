/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:39:40 by clouden           #+#    #+#             */
/*   Updated: 2026/05/12 17:28:14 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::~Weapon()
{}

Weapon::Weapon()
{
	type_ = "crude spiked club";
}

Weapon::Weapon(std::string type)
{
	type_ = type;
}

const std::string&	Weapon::getType() const
{
	return (type_);
}

void	Weapon::setType(std::string type)
{
	type_ = type;
}
