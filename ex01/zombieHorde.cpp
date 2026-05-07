/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 20:46:47 by clouden           #+#    #+#             */
/*   Updated: 2026/05/07 21:56:19 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>
using std::stringstream;
using std::string;

Zombie*	zombieHorde(int N, string name)
{
	int				i;
	string			new_name;
	stringstream	ss;
	Zombie*			horde = new Zombie[N];
	
	i = 0;
	while (i < N)
	{
		ss.str("");
		ss << (i + 1);
		new_name = name + ss.str();
		horde[i] = Zombie(new_name);
		horde[i].announce();
		i++;
	}
	return (horde);
}

