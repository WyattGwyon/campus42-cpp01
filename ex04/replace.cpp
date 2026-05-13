/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 22:50:45 by clouden           #+#    #+#             */
/*   Updated: 2026/05/13 14:15:40 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	replace(const std::string filename, std::string s1, std::string s2)
{
	std::string		line;
	std::ifstream	input;
	std::ofstream	output;
	std::string		new_file;

	input.open(filename.c_str());
	new_file = filename + ".replace";
	output.open(new_file.c_str());
	if (!input || !output)
	{
		std::cerr << "Error opening file" << std::endl;
		return (1);
	}
	while (std::getline(input, line))
	{
		size_t pos = line.find(s1);

		if (pos != std::string::npos)
		{
			line = line.substr(0, pos)
					+ s2
					+ line.substr(pos + s1.length());
		}
		output << line << std::endl;
	}
	return (0);
}

