/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:40:33 by clouden           #+#    #+#             */
/*   Updated: 2026/05/12 17:53:10 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) :
	name_(name),
	weapon_(weapon)
{}

void	HumanA::attack()
{
	std::cout	
			<< name_
			<< " attacks with their "
			<< weapon_.getType()
			<< std::endl;
}

