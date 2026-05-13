/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 18:32:04 by clouden           #+#    #+#             */
/*   Updated: 2026/05/13 20:00:18 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(void)
{
	Harl harl;

	std::cout << "DEBUG" << std::endl;
	harl.complain("DEBUG");
	std::cout << "INFO" << std::endl;
	harl.complain("INFO");
	std::cout << "WARNING" << std::endl;
	harl.complain("WARNING");
	std::cout << "ERROR" << std::endl;
	harl.complain("ERROR");
	
	return (0);
}
