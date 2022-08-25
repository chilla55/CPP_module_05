/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:05:36 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 20:41:53 by agrotzsc         ###   ########.fr       */
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
			Form f1("Form1",42, 10);
			std::cout << f1;
			a.signForm(f1);
			std::cout << f1;
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
			Form f1("Form1",42, 10);
			std::cout << f1;
			a.signForm(f1);
			std::cout << f1;
		}
		catch(std::exception & e)
		{
			std::cout << "Exception caught " << e.what() << std::endl;
		}
	}
}
