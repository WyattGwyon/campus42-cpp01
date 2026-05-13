/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 21:11:28 by clouden           #+#    #+#             */
/*   Updated: 2026/05/13 21:17:32 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "No argument passed: DEBUG, INFO, WARNING, ERROR\n";
		return (1);
	}
	Harl	harl;
	harl.complain(av[1]);
}
