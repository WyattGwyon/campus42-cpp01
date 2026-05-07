/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombies.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:51:45 by clouden           #+#    #+#             */
/*   Updated: 2026/05/07 20:06:59 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie()
{
private:
	std::string	name_;
public:
	Zombie();
	~Zombie();

	Zombie(std::string name);
	void	setName(std::string name);
	void	announce();
}
