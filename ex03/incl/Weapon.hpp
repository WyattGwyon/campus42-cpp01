/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:39:05 by clouden           #+#    #+#             */
/*   Updated: 2026/05/08 18:22:32 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WEAPON_H
# define	WEAPON_H

class	Weapon()
{
private:
	std::string	type_;

public:
	Weapon();
	Weapon(std::string name);
	~Weapon();

	std::string	getType();
	void		setType();
}

# endif
