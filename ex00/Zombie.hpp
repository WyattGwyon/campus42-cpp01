/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 13:46:59 by clouden           #+#    #+#             */
/*   Updated: 2026/05/06 19:57:21 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
private:
	std::string name_;
public:
	Zombie();
	Zombie(std::string name_);
	~Zombie();

	void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(string name)h
