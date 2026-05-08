/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 23:34:46 by clouden           #+#    #+#             */
/*   Updated: 2026/05/08 14:14:03 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		var = "HI THIS IS BRAIN";
	std::string&	stringREF = var;
	std::string*	stringPTR = &var;

	std::cout << " &var		(the address of var):		" << &var << std::endl;
	std::cout << " &stringREF	(the address of ref):		" << &stringREF << std::endl;
	std::cout << " &stringPTR	(the address of ptr):		" << &stringPTR << std::endl;
	std::cout << " \n";
	std::cout << " var		(the content of var):		" << var << std::endl;
	std::cout << " stringREF	(the content of ref):		" << stringREF << std::endl;
	std::cout << " stringPTR	(the content of ptr):		" << stringPTR << std::endl;
	std::cout << " \n";
	std::cout << " *var:						NOT A POINTER\n";
	std::cout << " *stringREF:					NOT A POINTER\n";
	std::cout << " *stringPTRi	(the content ptr points to):	" << *stringPTR << std::endl;
}
