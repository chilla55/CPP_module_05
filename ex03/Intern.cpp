/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 08:31:05 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 08:37:03 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void){}

Intern::Intern(const Intern &src)
{
	(void) src;
}

Intern::~Intern(void) {}

Intern& Intern::operator=(const Intern& rhs)
{
	(void)rhs;
	return (*this);
}

Form*	Intern::makeForm(std::string name, std::string target){

	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	Form * res;

	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			switch (i) {
				case 0: res = new PresidentialPardonForm(target);break;
				case 1: res = new RobotomyRequestForm(target);break;
				case 2: res = new ShrubberyCreationForm(target);break;
				default : std::cout << "nonError\n";res = NULL;
			}
			std::cout << "Intern creates " << res->getName() << std::endl;
			return (res);
		}
	}
	std::cout << "Form with a name: \"" << name << "\", doesnt exist" << std::endl;
	return (NULL);
}
