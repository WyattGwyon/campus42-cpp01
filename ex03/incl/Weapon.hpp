/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:39:05 by clouden           #+#    #+#             */
/*   Updated: 2026/05/12 17:28:14 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WEAPON_H
# define	WEAPON_H
# include	<iostream>

class	Weapon
{
private:
	std::string	type_;

public:
	Weapon();
	Weapon(std::string type);
	~Weapon();

	const std::string&	getType() const;
	void				setType(std::string type);
};

# endif
