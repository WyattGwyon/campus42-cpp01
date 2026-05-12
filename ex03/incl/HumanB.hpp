/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:40:54 by clouden           #+#    #+#             */
/*   Updated: 2026/05/12 19:42:58 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HUMANB_H
# define	HUMANB_H
# include	<iostream>
# include	"Weapon.hpp"

class	HumanB
{
private:
	std::string	name_;
	Weapon*		weapon_;
public:
	HumanB();
	HumanB(std::string name);
	void	setWeapon(Weapon& weapon);
	void	attack();
};

# endif
