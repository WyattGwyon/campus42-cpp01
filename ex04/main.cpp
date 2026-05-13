/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 20:24:28 by clouden           #+#    #+#             */
/*   Updated: 2026/05/13 18:05:26 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	main(int ac, char *av[])
{
	if (ac < 4)
	{
		std::cout << "Error: Usage: provide 3 arguments: ./replace <filename> <string1> <string2>\n";
		return (1);
	}
	replace(av[1], av[2], av[3]);
}
