/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:05:36 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 08:26:31 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <stdexcept>

int main()
{
	{try
	{
		Bureaucrat b("Odin", 1);
		PresidentialPardonForm P("Pardon");
		b.signForm(P);
		b.executeForm(P);
		RobotomyRequestForm R("Roboto");
		b.signForm(R);
		b.executeForm(R);
		ShrubberyCreationForm B("Tree");
		b.executeForm(B);
		b.signForm(B);
		b.executeForm(B);
	}
	catch(std::exception & e)
	{
		std::cout << "Exception caught " << e.what() << std::endl;
	}}
	
	return 0;
}
