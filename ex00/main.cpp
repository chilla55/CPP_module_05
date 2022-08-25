/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:05:36 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 20:42:07 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdexcept>

int main()
{
	{
		try
		{
			Bureaucrat a = Bureaucrat("Thor", 150);
			std::cout << a << "\n";
			--a;
			std::cout << a << "\n";
		}
		catch(std::exception & e)
		{
			std::cout << "Exception caught " << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat a = Bureaucrat("Odin", 1);
			std::cout << a << "\n";
			++a;
			std::cout << a << "\n";
		}
		catch(std::exception & e)
		{
			std::cout << "Exception caught " << e.what() << std::endl;
		}
	}
}
