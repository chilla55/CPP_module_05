/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:05:36 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 08:44:22 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern		someRandomIntern;
	Bureaucrat	b("Odin", 1);
	Form		*form;

	form = someRandomIntern.makeForm("robotomy request", "Roboto");
	b.signForm(*form);
	b.executeForm(*form);
	delete (form);
	form = someRandomIntern.makeForm("presidential pardon", "Pardon");
	b.signForm(*form);
	b.executeForm(*form);
	delete (form);
	form = someRandomIntern.makeForm("shrubbery creation", "Tree");
	b.signForm(*form);
	b.executeForm(*form);
	delete (form);
	return (0);
}

