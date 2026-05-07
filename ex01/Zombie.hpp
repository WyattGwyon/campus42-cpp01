/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:51:45 by clouden           #+#    #+#             */
/*   Updated: 2026/05/07 21:24:04 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
private:
	std::string	name_;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	announce();
};

Zombie*	zombieHorde(int N, std::string name);
