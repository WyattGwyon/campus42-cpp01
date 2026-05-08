/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:40:00 by clouden           #+#    #+#             */
/*   Updated: 2026/05/08 21:57:42 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HUMANA_H
# define	HUMANA_H
# include <iostream>

class	HumanA()
{
private:
	std::string	name_;
	Weapon&		weapon_;
public:
	HumanA();
	HumanA(std::string name);
}
