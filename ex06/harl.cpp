/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 19:07:33 by clouden           #+#    #+#             */
/*   Updated: 2026/05/14 14:29:25 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

Harl::Harl() 
{}

void	Harl::debug(void)
{
	std::cout << "DEBUG: I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
		<< "I really do!"
		<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. "
		<< "You didn’t put enough bacon in my burger! "
		<< "If you did, I wouldn’t be asking for more!"
		<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming for years, "
		<< "whereas you started working here just last month."
		<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR: This is unacceptable! "
		<< "I want to speak to the manager now."
		<< std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			switch(i)
			{
				case 0:
					std::cout << "[ DEBUG ]\n";
					debug();
					std::cout << "\n";
					/* fall through */
				case 1:
					std::cout << "[ INFO ]\n";
					info();
					std::cout << "\n";
					/* fall through */
				case 2:
					std::cout << "[ WARNING ]\n";
					warning();
					std::cout << "\n";
					/* fall through */
				case 3:
					std::cout << "[ ERROR ]\n";
					error();
					std::cout << "\n";
					/* fall through */
			}
			return;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}
