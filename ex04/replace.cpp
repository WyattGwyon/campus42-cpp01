/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 22:50:45 by clouden           #+#    #+#             */
/*   Updated: 2026/05/13 18:24:15 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	exit_error(std::ios& filestream, const std::string& message);

void	replace(const std::string filename, std::string s1, std::string s2)
{
	std::string		line;
	std::ifstream	input;
	std::ofstream	output;
	std::string		new_file;

	input.open(filename.c_str());
	exit_error(input, "Input File Error on Open");
	
	new_file = filename + ".replace";
	output.open(new_file.c_str());
	exit_error(output, "Output File Error on Open");
	
	if (!output)
	{
		std::cerr << "Error opening file" << std::endl;
		exit (1);
	}
	
	while (std::getline(input, line))
	{
		size_t pos = line.find(s1);
		if (pos != std::string::npos)
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
		output << line << std::endl;
	}
}

void	exit_error(std::ios& filestream, const std::string& message)
{
	if (!filestream)
	{
		std::cerr << message << std::endl;
		exit (1);
	}
}
